#pragma once
#include "MovableEntity.hpp"
#include "playerController.hpp"
#include "PlayerRepresentation.hpp"
class PlayerEntity : public MovableEntity
{
public:
	PlayerEntity();
	PlayerEntity(sf::Rect<float> cr);
	void Draw(sf::RenderWindow& window);
	void Update(sf::Time gameTime);

	~PlayerEntity();
};

