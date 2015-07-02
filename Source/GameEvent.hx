package;
import openfl.events.Event;

/**
 * ...
 * @author Nickan
 */
class GameEvent extends Event
{
	public static inline var GAME_OVER :String = "Game over";
	public static inline var RESTART :String = "Restart";
	
	public function new(type :String, bubbles :Bool = false, cancelable :Bool = false) 
	{
		super(type, bubbles, cancelable);
	}
	
}