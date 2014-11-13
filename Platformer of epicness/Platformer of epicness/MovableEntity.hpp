#pragma once
#include "Entity.hpp"
#include "Controller.hpp"
class MovableEntity :
	public Entity
{
public:
	MovableEntity();
	MovableEntity(sf::Rect<float> cr);
	~MovableEntity();
protected:
	EntityRepresentation representation;
	sf::Rect<float> collisionRect;

	Controller entityController;
	sf::Vector2f Velocity;
};

