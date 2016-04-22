#include <SFML\Graphics.hpp>

#include "Vector2d.h"

int main()
{	
	sf::CircleShape object(15, 3);

	sf::Vector2f vector2f; //original compatible vector2f object from SFML

	Vector2d vector2d; //vector from Vector2d class, if you want to compute vector first you must create vector object, becouse it have float type components  x & y

	vector2d = Vector2d::pointToPointVector(-13, 14, 21, 24); //Compute point to point vector

	vector2f.x = vector2d.x; //We can initiate vector SFML vector class vector2d, becouse the components have the same type - Float
	vector2f.y = vector2d.y; //Vector2d use float type as x & y components, but if You like You can convert to other primitive type using reinterpreter_cast<>

	object.move(vector2f); //Now you can translate object's with sfml compatible vector
	object.setRotation(Vector2d::rotationInDegreesFromVector(-13, 14, 21, 24)); //if you want the moved object was rotated in the direction of movement

	return EXIT_SUCCESS;
}