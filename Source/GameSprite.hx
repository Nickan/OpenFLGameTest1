package;
import openfl.Assets;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.KeyboardEvent;
import openfl.events.MouseEvent;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;
import openfl.ui.Keyboard;

/**
 * ...
 * @author Nickan
 */
class GameSprite extends Sprite
{

	static inline var MAX_ENEMY_SPAWN_INTERVAL :Float = 3;
	static inline var MIN_ENEMY_SPAWN_INTERVAL :Float = 1;
	
	var _enemySpawnInterval :Float = 0;
	var _enemySpawnTimer :Float = 0;
	
	var _bullets:Array<Bullet>;
	var _playerPlane:Plane;
	var _enemies :Array<EnemyPlane>;
	var _scoreTextField:TextField;
	var _score :Int = 0;
	
	public function new () {
		
		super ();
		_enemies = [];
		addEventListener(Event.ADDED_TO_STAGE, onAdded);
		addEventListener(Event.ENTER_FRAME, onUpdate);
		
		
	}

	private function onAdded(e:Event):Void 
	{
		removeEventListener(Event.ADDED_TO_STAGE, onAdded);
		stage.addEventListener(MouseEvent.MOUSE_DOWN, onMouseDown);
		
		setupBackgrounds();
		setupPlayerPlane();
		setupBullets();
		setupEnemySpawnInterval();
		setupScoreText();
	}
	
	private function onGameOver(e:GameEvent):Void 
	{
		stage.addEventListener(KeyboardEvent.KEY_DOWN, onKeyDown);
	}
	

	private function onMouseDown(e:MouseEvent):Void 
	{
		fireBullet();
	}
	
	private function onKeyDown(e:KeyboardEvent):Void 
	{
		if (e.keyCode == Keyboard.SPACE) {
			stage.removeEventListener(KeyboardEvent.KEY_DOWN, onKeyDown);
			dispatchEvent(new GameEvent(GameEvent.RESTART));
		}
	}
	
	// ================================================ SETUP ================================================== // 
	function setupBackgrounds() 
	{
		var background = new WaterBackground(Assets.getBitmapData("assets/main/Water.png"));
		addChild(background);
	}
	
	function setupPlayerPlane() 
	{
		_playerPlane = new Plane(Assets.getBitmapData("assets/main/planes/aircraft_3.png"));
		//_playerPlane.x = stage.stageWidth * 0.5;
		//_playerPlane.y = stage.stageHeight * 0.5;
		_playerPlane.x = stage.mouseX;
		_playerPlane.y = stage.mouseY;
		_playerPlane.startDrag(true);
		addChild(_playerPlane);
		
		#if html5
			addEventListener(MouseEvent.MOUSE_MOVE, onMouseMoved);
		#end
	}
	
	private function onMouseMoved(e :MouseEvent):Void 
	{
		_playerPlane.x = e.stageX;
		_playerPlane.y = e.stageY;
	}
	
	function setupBullets() 
	{
		_bullets = [];
	}
	
	function createBullet()
	{
		return new Bullet(Assets.getBitmapData("assets/main/Bullet.png"));
	}
	
	function setupEnemySpawnInterval() 
	{
		_enemySpawnInterval = Random.float(MIN_ENEMY_SPAWN_INTERVAL, MAX_ENEMY_SPAWN_INTERVAL);
	}
	
	function setupScoreText() 
	{
		var scoreTextFormat = new TextFormat("Verdana", 40, 0x00FF00, true, true, true);
		scoreTextFormat.align = TextFormatAlign.CENTER;
		
		_scoreTextField = new TextField();
		_scoreTextField.width = stage.stageWidth * 1;
		_scoreTextField.text = "";
		_scoreTextField.defaultTextFormat = scoreTextFormat;
		addChild(_scoreTextField);
	}
	
	// ================================================ UPDATE ================================================== //
	private function onUpdate(e:Event):Void 
	{
		if (_scoreTextField.text == "")
			_scoreTextField.text = "0";
		
		TimeManager.getInstance().update();
		var delta = TimeManager.getInstance().delta;
		
		updateEnemySpawn(delta);
		updatePlayerCollisionWithEnemyPlanesCheck();
		updateBulletCollisionWithEnemyPlanesCheck();
	}
	
	function updateEnemySpawn(delta :Float) 
	{
		_enemySpawnTimer += delta;
		if (_enemySpawnTimer >= _enemySpawnInterval) {
			_enemySpawnTimer -= _enemySpawnInterval;
			_enemySpawnTimer = Math.abs(_enemySpawnTimer);
			_enemySpawnInterval = Random.float(MIN_ENEMY_SPAWN_INTERVAL, MAX_ENEMY_SPAWN_INTERVAL);
			spawnRandomEnemy();
			//...
			//trace("Enemy spawn: " + _enemySpawnInterval);
		}
	}
	
	function updatePlayerCollisionWithEnemyPlanesCheck() 
	{
		for (enemy in _enemies) {
			var playerBounds = _playerPlane.getBounds(this);
			var enemyBounds = enemy.getBounds(this);
			if (playerBounds.intersects(enemyBounds))
				onShowGameOver();
		}
	}
	
	function updateBulletCollisionWithEnemyPlanesCheck() 
	{
		for (enemy in _enemies) {
			for (bullet in _bullets) {
				var bulletBounds = bullet.getBounds(this);
				var enemyBounds = enemy.getBounds(this);
				if (bulletBounds.intersects(enemyBounds)) {
					removeBullet(bullet);
					removeEnemy(enemy);
					_scoreTextField.text = "" + ++_score;
					break;
				}
				
				if (bulletBounds.y < -10) {
					removeBullet(bullet);
					break;
				}
					
			}
			
		}
	}
	
	function removeBullet(bullet :Bullet) 
	{
		_bullets.remove(bullet);
		bullet.dispose();
		removeChild(bullet);
	}
	
	function removeEnemy(enemy :EnemyPlane) 
	{
		_enemies.remove(enemy);
		enemy.dispose();
		removeChild(enemy);
	}
	
	
	function onShowGameOver() 
	{
		removeEventListener(Event.ENTER_FRAME, onUpdate);
		stage.removeEventListener(MouseEvent.MOUSE_DOWN, onMouseDown);
		stage.addEventListener(KeyboardEvent.KEY_DOWN, onKeyDown);
		
		#if html5
			removeEventListener(MouseEvent.MOUSE_MOVE, onMouseMoved);
		#end
		
		dispatchEvent(new GameEvent(GameEvent.GAME_OVER, true));

		_playerPlane.stopDrag();
		var textFormat = new TextFormat("Verdana", 24, 0x80FFFF, true);
		textFormat.align = TextFormatAlign.CENTER;
		
		var gameText = new TextField();
		addChild(gameText);
		gameText.y = stage.stageHeight * 0.5;
		gameText.width = stage.stageWidth * 1;
		gameText.defaultTextFormat = textFormat;
		gameText.text = "Game Over, press Space to play again";
		
	}
	
	// ================================================ HELPER ================================================== //
	function fireBullet() 
	{
		var bullet = createBullet();
		bullet.fire(_playerPlane.x, _playerPlane.y - _playerPlane.height * 0.5);
		_bullets.push(bullet);
		addChild(bullet);
	}
	
	function spawnRandomEnemy() 
	{
		var rand = Random.int(1, 2);
		var enemyPlane = new EnemyPlane(Assets.getBitmapData("assets/main/planes/aircraft_" + rand + ".png"));
		enemyPlane.functionToCallWhenOutOfScreen = onRemoveEnemyPlane;
		_enemies.push(enemyPlane);
		addChild(enemyPlane);
	}
	
	function onRemoveEnemyPlane(enemy :EnemyPlane) {
		removeChild(enemy);
		_enemies.remove(enemy);
	}

	
}