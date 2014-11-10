#pragma once
#include <SFML\Graphics.hpp>
#include "Entity.hpp"
class Layer
{
public:
	Layer();
	Layer(sf::Vector2f dimension, sf::Vector2f position = sf::Vector2f(0,0));
	Layer(float x, float y, float xp = 0, float xy = 0);
	~Layer();
	virtual void Draw(sf::RenderWindow& window) = 0;

protected:
	std::vector<Entity *> EntityList;
	sf::Rect<float> representation;
	void Add(Entity* ER);
	void Remove(Entity* ER);
	void Update(sf::Time gameTime);
};

