#pragma once
#include "Entity.hpp"
#include "Controller.hpp"
class Controller;
class MovableEntity :
	public Entity
{
public:
	MovableEntity();
	MovableEntity(sf::Rect<float> cr);
	virtual void Draw(sf::RenderWindow& window);
	virtual void Update(sf::Time gameTime);
	void setVelocity(float x, float y);
	~MovableEntity();
protected:
	Controller * entityController = nullptr;
	sf::Vector2f Velocity;
};

