#include "TileRepresentation.hpp"


TileRepresentation::TileRepresentation(sf::Vector2<float> pos, sf::Vector2<float> size)
{
	representation.setFillColor(sf::Color::White);
	representation.setPosition(pos);
	representation.setSize(size);
}



void TileRepresentation::setTexture(sf::Texture* text){
	representation.setFillColor(sf::Color::Transparent);
	representation.setTexture(text);
}

void TileRepresentation::setSize(sf::Vector2f size){
	representation.setSize(size);
}
void TileRepresentation::setSize(int x, int y){
	representation.setSize(sf::Vector2f((int)x, (int)y));
}

void TileRepresentation::setPosition(sf::Vector2f pos){
	representation.setPosition(pos);
}
sf::Vector2f TileRepresentation::getPosition(){ return representation.getPosition(); }

void TileRepresentation::Draw(sf::RenderWindow & window){
	window.draw(representation);
}


TileRepresentation::~TileRepresentation()
{
}
