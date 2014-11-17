#pragma once
#include <SFML\Graphics.hpp>
#include "EntityRepresentation.hpp"
#include <iostream>
class Entity
{
public:
	Entity();
	Entity(sf::Rect<float> cr);
	~Entity();
	virtual void Draw(sf::RenderWindow& window);
	virtual void Update(sf::Time gameTime);

	void setRepresentation(EntityRepresentation * er);
	void setCollisionRect(sf::Rect<float> cr);
	sf::Rect<float> getCollisionRect();
protected:

	EntityRepresentation * representation;
	sf::Rect<float> collisionRect;
};

