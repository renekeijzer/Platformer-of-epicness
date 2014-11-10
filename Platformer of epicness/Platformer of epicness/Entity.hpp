#pragma once
#include <SFML\Graphics.hpp>
class Entity
{
public:
	Entity();
	~Entity();
	virtual void Draw(sf::RenderWindow& window) = 0;
	virtual void Update(sf::Time gameTime) = 0;
protected:
	EntityRepresentation representation;
};

