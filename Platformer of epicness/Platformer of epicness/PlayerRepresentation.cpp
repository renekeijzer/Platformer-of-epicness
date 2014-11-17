#include "PlayerRepresentation.hpp"


PlayerRepresentation::PlayerRepresentation()
{
	representation.setFillColor(sf::Color::White);
	representation.setPosition(0, 0);
	representation.setSize(sf::Vector2<float>(32, 32));
}

void PlayerRepresentation::Draw(sf::RenderWindow & window){
	window.draw(representation); 
}


PlayerRepresentation::~PlayerRepresentation()
{
}
