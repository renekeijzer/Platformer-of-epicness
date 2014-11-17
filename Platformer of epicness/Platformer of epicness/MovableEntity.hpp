#pragma once
#include "Entity.hpp"
#include "Controller.hpp"
class MovableEntity :
	public Entity
{
public:
	MovableEntity();
	MovableEntity(sf::Rect<float> cr);
	virtual void Draw(sf::RenderWindow& window) override;
	virtual void Update(sf::Time gameTime) override;
	~MovableEntity();
protected:
	
	Controller entityController;
	sf::Vector2f Velocity;
};

