package ml.tycjan.vector2d;

public class Vector2d {
	
	private float x;
	private float y;
	
	public Vector2d(float x, float y){
		this.x = x;
		this.y = y;
	}
	
	public void setX(float x) {
		this.x = x;
	}

	public void setY(float y) {
		this.y = y;
	}

	public float getX() {
		return x;
	}

	public float getY() {
		return y;
	}
	
	
	public static float radiansToDegrees(float radians){
		
		float degrees = (float) (radians * Math.PI / 180f);
		return degrees;
	}
	
	public static float degreesToRadians(float degrees){
		
		float radians = (float) (degrees * 180f / Math.PI);
		return radians;
	}
	
	public static float rotationInRadiansFromVector(float toX, float toY, float fromX, float fromY){
		float angle = (float) (Math.atan2(toY - fromY, toX - fromX));
		float radians = angle;
		
		return radians;
	}
	
	public static float rotationInRadiansFromVector(Vector2d vector){
		float angle = (float) (Math.atan2(vector.y, vector.x));
		float radians = angle;
		
		return radians;
	}
	
	public static float rotationInDegreesFromVector(float toX, float toY, float fromX, float fromY){
		float angle = (float) (Math.atan2(toY - fromY, toX - fromX));
		float degrees = (float) (angle * 180f / Math.PI);
		
		return degrees;
	}
	
	public static float rotationInDegreesFromVector(Vector2d vector){
		float angle = (float) (Math.atan2(vector.y, vector.x));
		float degrees = (float) (angle * 180f / Math.PI);
		
		return degrees;
	}
	
	public static Vector2d pointToPointVector(float toX, float toY, float fromX, float fromY){
		
		Vector2d vector2d = new Vector2d(toX - fromX, toY - fromY);
		return vector2d;
	}
	
	public static Vector2d pointToPointVector(Vector2d to, Vector2d from){
		
		Vector2d vector2d = new Vector2d(to.x - from.x, to.y - from.y);
		return vector2d;
	}
	
	
	public static Vector2d vectorFromRotationInRadians(float radians){
		
		float vectorX = (float)(Math.sin(radians));
		float vectorY = (float)(-Math.cos(radians));
		
		Vector2d vector2d = new Vector2d(vectorX, vectorY);
		return vector2d;
	}
	
	public static Vector2d vectorFromRotationInDegrees(float degrees){
		
		float radians = Vector2d.degreesToRadians(degrees);
		
		float vectorX = (float)(Math.sin(radians));
		float vectorY = (float)(-Math.cos(radians));
		
		Vector2d vector2d = new Vector2d(vectorX, vectorY);
		return vector2d;
	}
	
}
