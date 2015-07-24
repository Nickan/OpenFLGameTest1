package;
import openfl.display.BitmapData;
import openfl.events.Event;

/**
 * ...
 * @author Nickan
 */
class EnemyPlane extends Plane
{
	public var functionToCallWhenOutOfScreen(default, default) :EnemyPlane-> Void;
	
	var _speed :Float = 200;
	
	public function new(bitmapData :BitmapData) 
	{
		super(bitmapData);
		addEventListener(Event.ADDED_TO_STAGE, onAdded);
		
	}
	
	// ================================================ EVENT LISTENER ================================================== //
	private function onAdded(e:Event):Void 
	{
		removeEventListener(Event.ADDED_TO_STAGE, onAdded);
		parent.addEventListener(GameEvent.GAME_OVER, onGameOver);
		
		addEventListener(Event.ENTER_FRAME, onUpdate);
		setupRandomSpawnPosition();
	}
	
	private function onGameOver(e:GameEvent):Void 
	{
		removeEventListener(Event.ENTER_FRAME, onUpdate);
		if (parent == null)
			return;
		parent.removeEventListener(GameEvent.GAME_OVER, onGameOver);
	}
	
	
	
	function setupRandomSpawnPosition() 
	{
		var halfWidth = _planeBitmap.width * 0.5;
		this.x = Random.float(halfWidth, stage.stageWidth - halfWidth);
		this.y = _planeBitmap.height * -0.5;
	}
	
	
	private function onUpdate(e:Event):Void 
	{
		if (stage == null)
			return;
		
		var delta = TimeManager.getInstance().delta;
		this.y += delta * _speed;
		//...
		//trace("
		if (this.y - _planeBitmap.height * 0.5 > stage.stageHeight) {
			if (functionToCallWhenOutOfScreen != null) {
				removeEventListener(Event.ENTER_FRAME, onUpdate);
				functionToCallWhenOutOfScreen(this);
			}
		}
	}
	
	public function dispose()
	{
		removeEventListener(Event.ENTER_FRAME, onUpdate);
		parent.removeEventListener(GameEvent.GAME_OVER, onGameOver);
	}
	
}