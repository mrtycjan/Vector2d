import ml.tycjan.vector2d.*; //Import package to use Vector2d class

public class IntegrationWithJava {

	public static void main(String[] args){
		
		Vector2d vector2d = new Vector2d(0f,0f); //Create Object vector2d
		Vector2d from = new Vector2d(-14f, -13f);
		Vector2d to = new Vector2d(12f, 14f);
		
		Vector2d vector = Vector2d.pointToPointVector(to, from); 
		vector2d = Vector2d.pointToPointVector(12f, 14f, -14f, -13f); //this function is overridden 
		
		float angle = Vector2d.rotationInDegreesFromVector(vector2d);
		
		System.out.println("X: "+vector2d.getX()); //As x and y vector2d use primitive-type float 
		System.out.println("Y: "+vector2d.getY()); //So you can use Setters and Getters to get float-like compatible variable 
		System.out.println("Angle in Degrees: "+angle);
		System.out.println("Same vector but other function is overridden");
		System.out.println("X: "+vector.getX()+" Y: "+vector.getY());
	
	}
}
