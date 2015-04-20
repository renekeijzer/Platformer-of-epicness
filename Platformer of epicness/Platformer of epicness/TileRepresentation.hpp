#pragma once
#include "EntityRepresentation.hpp"
class TileRepresentation :
	public EntityRepresentation
{
public:
	TileRepresentation(sf::Vector2<float> pos = sf::Vector2<float>(0, 0), sf::Vector2<float> size = sf::Vector2<float>(32,32));
	void setPosition(sf::Vector2f pos);
	void setSize(int x, int y);
	void setSize(sf::Vector2f size);
	void setTexture(sf::Texture * text);
	sf::Vector2f getPosition();
	void Draw(sf::RenderWindow & window);
	~TileRepresentation();
private:
	sf::RectangleShape representation;
	sf::Texture graphics;
};

