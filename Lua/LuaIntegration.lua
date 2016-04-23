Vector2d = require("Vector2d") --> Add Vector2d Module

local from = {x=10, y=12} --> from = current player position
local to = {x=10, y=12} --> to = the coordinates of the object which the player follow

local vector = Vector2d.pointToPointVector(from, to) --> Counting Actual vector of movement
local angle = Vector2d.rotationInDegreesFromVector(vector) --> Based on vector counting object rotation (because we want the object to be rotated in the direction of movement)

io.write("vector.x = ", vector.x, "\n","vector.y = ", vector.y, "\n")
io.write("angle = ", angle, "\n")
