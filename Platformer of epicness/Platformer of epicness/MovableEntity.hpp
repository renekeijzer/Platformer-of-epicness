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
	
	Controller entityController;
	sf::Vector2f Velocity;
};

