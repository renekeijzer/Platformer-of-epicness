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
	void setPosition(sf::Vector2f pos);
	void setPosition(int x, int y);
	void setPostition(float x, float y);
	void setRepresentation(EntityRepresentation * er);
	sf::Rect<float> getCollisionRect();
protected:

	EntityRepresentation * representation;
	sf::Rect<float> collisionRect;
};

