#include "UIlayer.hpp"


UIlayer::UIlayer()
{
}

void UIlayer::add(sf::Drawable * draw){
	drawableList.push_back(draw);
}

void UIlayer::Update(sf::Time gameTime){
	if (active){
		
	
	}

}

void UIlayer::Draw(sf::RenderWindow & window){
	if (active){
		for each (sf::Drawable * dr in drawableList){
			window.draw(*dr);
		}
	}
}


UIlayer::~UIlayer()
{
}
