#include "Entity.hpp"


Entity::Entity(){}
Entity::Entity(sf::Rect<float> cr) :collisionRect(cr){}

void Entity::setPosition(sf::Vector2f pos){
	collisionRect.top = pos.y;
	collisionRect.left = pos.x;
}
void Entity::setPosition(int x, int y){
	collisionRect.top = y;
	collisionRect.left = x;
}
void Entity::setPostition(float x, float y){
	collisionRect.top = y;
	collisionRect.left = x;
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
