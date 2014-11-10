#pragma once
#include "Layer.hpp"
class DynamicLayer :
	public Layer
{
public:
	DynamicLayer();
	~DynamicLayer();
	void Draw(sf::RenderWindow& window);

};

