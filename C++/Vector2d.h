#include <cmath>

#define PI 3.14159265359

class Vector2d
{
public:

	float x;
	float y;

	Vector2d(float=0, float=0);


	static float radiansToDegrees(float radians); //Convert Radians into Degrees

	static float degreesToRadians(float degrees); //Convert Degrees into Radians
	
	static float rotationInRadiansFromVector(float vectorX, float vectorY); //Compute rotation from computed vector, returns rotation in radians

	static float rotationInRadiansFromVector(float fromX, float fromY, float toX, float toY); //Compute vector and rotation from vector, returns rotation in radians

	static float rotationInDegreesFromVector(float vectorX, float vectorY); //Compute rotation from computed vector, returns rotation in degrees

	static float rotationInDegreesFromVector(float fromX, float fromY, float toX, float toY); //Compute vector and rotation from vector, returns rotation in degrees

	static Vector2d pointToPointVector(float toX, float toY, float fromX, float fromY, float deltaTime = 1, float velocity = 1); //Compute vector, optional arguments, deltaTime, object velocity
	
	static Vector2d vectorFromRotationInRadians(float rotationInRadians, float deltaTime = 1, float velocity = 1); //Compute vector from rotation in radians, optional arguments, deltaTime, object velocity

	static Vector2d vectorFromRotationInDegrees(float rotationInDegrees, float deltaTime = 1, float velocity = 1); //Compute vector from rotation in degrees, optional arguments, deltaTime, object velocity

};