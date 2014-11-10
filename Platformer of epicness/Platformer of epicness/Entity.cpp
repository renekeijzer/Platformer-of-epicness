#include "Entity.hpp"


Entity::Entity()
{
}

void Entity::Draw(sf::RenderWindow & window){
	representation.Draw(window);
}

Entity::~Entity()
{
}
