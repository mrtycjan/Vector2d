#include "Vector2d.h"

Vector2d::Vector2d(float X, float Y)
{
	x = X;
	y = Y;
}

float Vector2d::radiansToDegrees(float radians)
{	
	float rotationInDegree = (radians * 180.f) / PI;

	return rotationInDegree;
}

float Vector2d::degreesToRadians(float degrees)
{
	float rotationInRadians = (degrees * PI) / 180.f;
	
	return rotationInRadians;
}

float Vector2d::rotationInRadiansFromVector(float vectorX, float vectorY)
{
	float rotationInRadians = std::atan2f(vectorY, vectorX);

	return rotationInRadians;
}

float Vector2d::rotationInRadiansFromVector(float fromX, float fromY, float toX, float toY)
{
	float vectorX = toX - fromX;
	float vectorY = toY - fromY;

	float rotationInRadians = std::atan2f(vectorY, vectorX);

	return rotationInRadians;
}

float Vector2d::rotationInDegreesFromVector(float vectorX, float vectorY)
{
	float rotationInRadians = std::atan2f(vectorY, vectorX);
	float rotationInDegrees = (rotationInRadians * 180.f) / PI;

	return rotationInRadians;
}

float Vector2d::rotationInDegreesFromVector(float fromX, float fromY, float toX, float toY)
{
	float vectorX = toX - fromX;
	float vectorY = toY - fromY;

	float rotationInRadians = std::atan2f(vectorY, vectorX);
	float rotationInDegrees = (rotationInRadians * 180.f) / PI;

	return rotationInDegrees;
}

Vector2d Vector2d::pointToPointVector(float toX, float toY, float fromX, float fromY, float deltaTime, float velocity)
{
	float vectorX = toX - fromX * deltaTime * velocity;
	float vectorY = toY - fromY * deltaTime * velocity;

	return Vector2d(vectorX, vectorY);
}

Vector2d Vector2d::vectorFromRotationInRadians(float rotationInRadian, float deltaTime, float velocity)
{
	float vectorX = std::sin(rotationInRadian) * deltaTime * velocity;
	float vectorY = -std::cos(rotationInRadian) * deltaTime * velocity;

	return Vector2d(vectorX, vectorY);
}

Vector2d Vector2d::vectorFromRotationInDegrees(float rotationInDegrees, float deltaTime, float velocity)
{
	float rotationInRadians = (rotationInDegrees * PI) / 180.f;

	float vectorX = std::sin(rotationInRadians) * deltaTime * velocity;
	float vectorY = -std::cos(rotationInRadians) * deltaTime * velocity;

	return Vector2d(vectorX, vectorY);
}
