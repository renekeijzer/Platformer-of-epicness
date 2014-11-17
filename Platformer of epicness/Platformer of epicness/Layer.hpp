#pragma once
#include <SFML\Graphics.hpp>
#include "Entity.hpp"
#include <iostream>
class Layer
{
public:
	Layer();
	Layer(sf::Vector2f dimension, sf::Vector2f position = sf::Vector2f(0,0));
	Layer(float x, float y, float xp = 0, float xy = 0);
	~Layer();
	void setActive(bool set);
	bool isActive();
	virtual void Update(sf::Time gameTime);
	virtual void Draw(sf::RenderWindow& window) = 0;
	void Add(Entity* ER);
protected:
	bool active;
	std::vector<Entity *> EntityList;
	sf::Rect<float> representation;
	void Remove(Entity* ER);
};

