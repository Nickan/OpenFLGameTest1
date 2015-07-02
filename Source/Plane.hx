package;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.events.Event;

/**
 * ...
 * @author Nickan
 */
class Plane extends Sprite
{
	var _planeBitmap:Bitmap;
	
	public function new(planeBitmapData :BitmapData) 
	{
		super();
		_planeBitmap = new Bitmap(planeBitmapData);
		_planeBitmap.x = _planeBitmap.width * -0.5;
		_planeBitmap.y = _planeBitmap.height * -0.5;
		
		addChild(_planeBitmap);
	}
	
}