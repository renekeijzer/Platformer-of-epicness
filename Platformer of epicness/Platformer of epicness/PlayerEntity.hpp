#pragma once
#include "MovableEntity.hpp"
#include "PlayerRepresentation.hpp"
class PlayerEntity : public MovableEntity
{
public:
	PlayerEntity();
	PlayerEntity(sf::Rect<float> cr);
	void Draw(sf::RenderWindow& window)override;
	void Update(sf::Time gameTime) override;

	~PlayerEntity();
};

