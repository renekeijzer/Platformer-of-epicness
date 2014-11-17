#include "DynamicLayer.hpp"


DynamicLayer::DynamicLayer()
{
	active = true;
}


DynamicLayer::~DynamicLayer()
{
}


void DynamicLayer::Draw(sf::RenderWindow& window)
{
	if (active){
		for (Entity * ent : EntityList)
		{
			ent->Draw(window);
		}
	}
}
