#pragma once
#include "Layer.hpp"
class StaticLayer :
	public Layer
{
public:
	StaticLayer();
	~StaticLayer();
	void Draw(sf::RenderWindow& window);
};

