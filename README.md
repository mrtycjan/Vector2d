## Vector2d
Physical library supporting vectors calculations.

### Available language implementation
- C++ 
- Lua 
- Java

### How to use?
First choose implementation language according with yours.

### For C++
Download Vector2d.h and Vector2d.cpp and paste file into your project directory. In first lines of code add a preprocesor directive 
```cpp
#include "Vector2d.h"
```
![cpp](http://i.imgur.com/ixyyilq.png)

We use "" becouse we keep this files in project directory.

### How to integrate with project (C++)
Take look at [Example Integration](https://github.com/mrtycjan/Vector2d/blob/master/C++/ExampleIntegrationWithSFML.cpp)

### What this all Functions do? (C++)
Many of functions implemented in Vector2d is Overridden. What it's mean? You can use the same function with multiple arguments. Also they have a default value for non-necessary arguments. Every functions have long name, which simply explains what they do, just take a look at Vector2d.h and comments.

```cpp
	static float radiansToDegrees(float radians); //Convert Radians into Degrees

	static float degreesToRadians(float degrees); //Convert Degrees into Radians
	
	static float rotationInRadiansFromVector(float vectorX, float vectorY); //Compute rotation from computed vector, returns rotation in radians

	static float rotationInRadiansFromVector(float fromX, float fromY, float toX, float toY); //Compute vector and rotation from vector, returns rotation in radians

	static float rotationInDegreesFromVector(float vectorX, float vectorY); //Compute rotation from computed vector, returns rotation in degrees

	static float rotationInDegreesFromVector(float fromX, float fromY, float toX, float toY); //Compute vector and rotation from vector, returns rotation in degrees

	static Vector2d pointToPointVector(float toX, float toY, float fromX, float fromY, float deltaTime = 1, float velocity = 1); //Compute vector, optional arguments, deltaTime, object velocity
	
	static Vector2d vectorFromRotationInRadians(float rotationInRadians, float deltaTime = 1, float velocity = 1); //Compute vector from rotation in radians, optional arguments, deltaTime, object velocity

	static Vector2d vectorFromRotationInDegrees(float rotationInDegrees, float deltaTime = 1, float velocity = 1); //Compute vector from rotation in degrees, optional arguments, deltaTime, object velocity

```

### For Lua
With Lua it will be a little bit more easier, download and paste into project folder Vector2d.lua. Finally add this as a Lua module just add this line of code.

```lua
Vector2d = require("Vector2d")
```
### How to integrate with project (Lua)
Take look at [Example Integration](https://github.com/mrtycjan/Vector2d/blob/master/Lua/LuaIntegration.lua)

### Functions (Lua)

```lua
function Vector2d.pointToPointVector(from, to) --> first create object with x and y components e.g Object = {x, y}. In fact Lua is non-objective language, but you can pretend it, using metatables. This function counting vector of Movement based of coordinates

function Vector2d.vectorFromRotationInRadians(rotationInRadians, velocity) --> This function counting vector of Movement based of object rotation in Radians, optional arguments it's speed of object

function Vector2d.vectorFromRotationInDegrees(rotationInDegrees, velocity) --> This function counting vector of Movement based of object rotation in Degrees, optional arguments it's speed of object

function Vector2d.rotationInDegreesFromVector(vectorOfMovement) --> Based on vector counting rotation and return value in Degrees
	
function Vector2d.rotationInRadiansFromVector(vectorOfMovement) --> Based on vector counting rotation and return value in Radians
	
function Vector2d.radiansToDegrees(radians) --> Converts radians to degrees

function Vector2d.degreesToRadians(degrees) --> Converts degrees to radians


```
