#include "Vector2d.h"

Vector2d::Vector2d(float X, float Y)
{
	x = X;
	y = Y;
}

float Vector2d::radiansToDegree(float radians)
{	
	float rotationInDegree = (radians * 180.f) / PI;

	return rotationInDegree;
}

float Vector2d::degreeToRadians(float degree)
{
	float rotationInRadians = (degree * PI) / 180.f;
	
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

float Vector2d::rotationInDegreeFromVector(float vectorX, float vectorY)
{
	float rotationInRadians = std::atan2f(vectorY, vectorX);
	float rotationInDegree = (rotationInRadians * 180.f) / PI;

	return rotationInRadians;
}

float Vector2d::rotationInDegreeFromVector(float fromX, float fromY, float toX, float toY)
{
	float vectorX = toX - fromX;
	float vectorY = toY - fromY;

	float rotationInRadians = std::atan2f(vectorY, vectorX);
	float rotationInDegree = (rotationInRadians * 180.f) / PI;

	return rotationInDegree;
}

Vector2d Vector2d::pointToPointVector(float toX, float toY, float fromX, float fromY)
{
	float vectorX = toX - fromX;
	float vectorY = toY - fromY;

	return Vector2d(vectorX, vectorY);
}

Vector2d Vector2d::vectorFromRotationInRadians(float rotationInRadian, float deltaTime, float velocity)
{
	float vectorX = std::sin(rotationInRadian) * deltaTime * velocity;
	float vectorY = -std::cos(rotationInRadian) * deltaTime * velocity;

	return Vector2d(vectorX, vectorY);
}

Vector2d Vector2d::vectorFromRotationInDegree(float rotationInDegree, float deltaTime, float velocity)
{
	float rotationInRadians = (rotationInDegree * PI) / 180.f;

	float vectorX = std::sin(rotationInRadians) * deltaTime * velocity;
	float vectorY = -std::cos(rotationInRadians) * deltaTime * velocity;

	return Vector2d(vectorX, vectorY);
}