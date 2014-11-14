#pragma once
#include "Layer.hpp"
class UIlayer :
	public Layer
{
public:
	UIlayer();

	void Draw(sf::RenderWindow & window);
	void add(sf::Drawable * draw);
	void remove(sf::Drawable* draw);

	void Update(sf::Time gameTime);
	~UIlayer();
private:
	std::vector<sf::Drawable * > drawableList;
};

