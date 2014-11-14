#include "Entity.hpp"


Entity::Entity(){}
Entity::Entity(sf::Rect<float> cr) :collisionRect(cr){}

void Entity::setCollisionRect(sf::Rect<float> cr){
	collisionRect = cr;
}

sf::Rect<float> Entity::getCollisionRect(){
	return collisionRect;
}

void Entity::setRepresentation(EntityRepresentation * er){
	representation = er;

}

void Entity::Update(sf::Time gameTime){}
void Entity::Draw(sf::RenderWindow & window){
	representation->Draw(window);
}

Entity::~Entity()
{
}
