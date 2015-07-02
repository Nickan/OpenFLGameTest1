package;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.events.Event;

/**
 * ...
 * @author Nickan
 */
class Bullet extends Sprite
{
	var _bulletSpeed :Float = 300;
	var _bitmap:Bitmap;
	
	public function new(bitmapData :BitmapData) 
	{
		super();
		_bitmap = new Bitmap(bitmapData);
		_bitmap.x = _bitmap.width * -0.5;
		_bitmap.y = _bitmap.height * -0.5;
		this.visible = false;
		addChild(_bitmap);
		
		addEventListener(Event.ADDED_TO_STAGE, onAdded);
	}
	
	private function onAdded(e:Event):Void 
	{
		removeEventListener(Event.ADDED_TO_STAGE, onAdded);
		setupEventListener();
	}
	
	function setupEventListener() 
	{
		addEventListener(Event.ENTER_FRAME, onUpdate);
		parent.addEventListener(GameEvent.GAME_OVER, onGameOver);
	}
	
	private function onGameOver(e:GameEvent):Void 
	{
		removeEventListener(Event.ENTER_FRAME, onUpdate);
		parent.removeEventListener(GameEvent.GAME_OVER, onGameOver);
	}
	
	public function dispose()
	{
		removeEventListener(Event.ENTER_FRAME, onUpdate);
		parent.removeEventListener(GameEvent.GAME_OVER, onGameOver);
	}
	
	
	private function onUpdate(e:Event):Void 
	{
		if (!visible)
			return;
			
		var delta = TimeManager.getInstance().delta;
		this.y -= delta * _bulletSpeed;
		if (this.y < _bitmap.height * -0.5)
			visible = false;
	}
	
	// ================================================ FUNCTIONS TO USE ================================================== //
	/**
	 * 
	 * @return If is fired or not
	 */
	public function fire(x :Float = 0, y :Float = 0) :Bool {
		if (visible)
			return false;
			
		this.x = x;
		this.y = y;
		visible = true;
		return true;
	}
	
}