#include <cmath>

#define PI 3.14159265359

class Vector2d
{
private:

	float x;
	float y;

	Vector2d(float X, float Y);

public:

	static float radiansToDegree(float radians);

	static float degreeToRadians(float degree);

	static float rotationInRadiansFromVector(float vectorX, float vectorY);

	static float rotationInRadiansFromVector(float fromX, float fromY, float toX, float toY);

	static float rotationInDegreeFromVector(float vectorX, float vectorY);

	static float rotationInDegreeFromVector(float fromX, float fromY, float toX, float toY);

	static Vector2d pointToPointVector(float toX, float toY, float fromX, float fromY);
	
	static Vector2d vectorFromRotationInRadians(float rotationInRadians, float deltaTime = 1, float velocity = 1);

	static Vector2d vectorFromRotationInDegree(float rotationInDegree, float deltaTime = 1, float velocity = 1);

};