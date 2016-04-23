local Vector2d = {}

function Vector2d.pointToPointVector(from, to)

	local vectorOfMovement = {x, y}
	vectorOfMovement.x  = to.x - from.x
	vectorOfMovement.y = to.y - from.y

	return vectorOfMovement
end	

function Vector2d.vectorFromRotationInRadians(rotationInRadians, velocity)
	
	local vectorOfMovement = {x, y}
	
	if(velocity ~= nil) then
		vectorOfMovement.x = math.sin(rotationInRadians) * velocity
		vectorOfMovement.y = -math.cos(rotationInRadians) * velocity
	else 
		vectorOfMovement.x = math.sin(rotationInRadians)
		vectorOfMovement.y = -math.cos(rotationInRadians)
	end
	return vectorOfMovement
end

function Vector2d.vectorFromRotationInDegrees(rotationInDegrees, velocity)
	
	local vectorOfMovement = {x, y}
	local rotationInRadians = rotationInDegrees * math.pi / 180
	
	if(velocity ~= nil) then
		vectorOfMovement.x = math.sin(rotationInRadians) * velocity
		vectorOfMovement.y = -math.cos(rotationInRadians) * velocity
	else 
		vectorOfMovement.x = math.sin(rotationInRadians)
		vectorOfMovement.y = -math.cos(rotationInRadians)
	end

	return vectorOfMovement
end

function Vector2d.rotationInDegreesFromVector(vectorOfMovement)
	
	local angleInRadians = math.atan2(vectorOfMovement.y, vectorOfMovement.x)
	local angleInDegrees = (angleInRadians * 180) / math.pi

	return angleInDegrees
end

function Vector2d.rotationInRadiansFromVector(vectorOfMovement)
	
	local angleInRadians = math.atan2(vectorOfMovement.y, vectorOfMovement.x)

	return angleInRadians
end

function Vector2d.radiansToDegrees(radians)
	local degrees = ( radians * 180 ) / math.pi

	return degrees
end

function Vector2d.degreesToRadians(degrees)
	local radians = ( degrees * math.pi ) / 180

	return radians
end

return Vector2d

