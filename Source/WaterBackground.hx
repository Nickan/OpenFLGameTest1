package;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.events.Event;

/**
 * ...
 * @author Nickan
 */
class WaterBackground extends Sprite
{
	var _bitmapData :BitmapData;
	var _backgrounds :Array<Array<Bitmap>>;
	var _verticalSpeed :Float = 100;
	
	public function new(bitmapData :BitmapData) 
	{
		super();
		_bitmapData = bitmapData;
		addEventListener(Event.ADDED_TO_STAGE, onAdded);
		addEventListener(Event.ENTER_FRAME, onUpdate);
	}
	
	// ================================================ EVENT LISTENER ================================================== //
	private function onAdded(e:Event):Void 
	{
		removeEventListener(Event.ADDED_TO_STAGE, onAdded);
		parent.addEventListener(GameEvent.GAME_OVER, onGameOver);
		setupBackgrounds();
	}
	
	private function onGameOver(e:GameEvent):Void 
	{
		//...
		removeEventListener(Event.ENTER_FRAME, onUpdate);
		parent.removeEventListener(GameEvent.GAME_OVER, onGameOver);
		//trace("Game over");
	}
	
	
	function setupBackgrounds() 
	{
		_backgrounds = [];
		var tileRows :Int = Std.int(stage.stageWidth / _bitmapData.width);
		var tileColumns :Int = Math.ceil(stage.stageHeight / _bitmapData.height) + 2;
		for (column in 0...tileColumns) {
			_backgrounds.push([]);
			addTopBackground(column);
		}
	}
	
	private function onUpdate(e:Event):Void 
	{
		var delta = TimeManager.getInstance().delta;
		//...
		//trace("Delta: " + delta);
		moveAllBackgrounds(delta);
		checkIfBottomBackgroundIsOutOfScreen();
	}
	
	function moveAllBackgrounds(delta :Float) 
	{
		var speed = _verticalSpeed * delta;
		for (backgrounds in _backgrounds) {
			for (backgroundBitmap in backgrounds) {
				backgroundBitmap.y += speed;
			}
		}
	}
	
	function checkIfBottomBackgroundIsOutOfScreen() 
	{
		var bottomBackgrounds = _backgrounds[_backgrounds.length - 1];
		var bottomBitmap = bottomBackgrounds[bottomBackgrounds.length - 1];
		if (bottomBitmap.y > stage.stageHeight) {
			//... 
			//trace("Set on top");
			bottomBackgrounds =  _backgrounds.pop();
			setBackgroundOnTop(bottomBackgrounds);
			_backgrounds.insert(0, bottomBackgrounds);
		}
	}
	
	function setBackgroundOnTop(bottomBackgrounds:Array<Bitmap>) 
	{
		for (bottomBitmap in bottomBackgrounds) {
			bottomBitmap.y = _backgrounds[0][0].y - (_bitmapData.height - 1);
		}
	}
	
	// ================================================ HELPER ================================================== //
	function addTopBackground(tileColumnNumber :Int)
	{
		var tileRows :Int = Std.int(stage.stageWidth / _bitmapData.width);
		for (row in 0...tileRows) {
			var waterBitmap = new Bitmap(_bitmapData);
			waterBitmap.x = _bitmapData.width * row;
			waterBitmap.y = (_bitmapData.height - 1) * (tileColumnNumber - 1);
			addChild(waterBitmap);
			_backgrounds[tileColumnNumber].push(waterBitmap);
			//trace("Pos y: " + waterBitmap.y);
		}
	}
	
}