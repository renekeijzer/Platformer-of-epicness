#include "Layer.hpp"


Layer::Layer()
{
}


Layer::~Layer()
{
}

void Layer::Add(Entity * et){
	if (et != nullptr){
		EntityList.push_back(et);
	}
}

bool Layer::isActive(){ return active; }

void Layer::Remove(Entity* et){
	//Some remove code here
}

void Layer::Update(sf::Time gameTime){
	if (active)
	{
		for each (Entity* entity in EntityList)
		{
			entity->Update(gameTime);
		}
	}

}

void Layer::setActive(bool set){
	active = set;
}
