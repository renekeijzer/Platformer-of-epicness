#pragma once
#include "Layer.hpp"
class UIlayer :
	public Layer
{
public:
	UIlayer();

	void Draw(sf::RenderWindow & window) override;
	~UIlayer();
};

