#pragma once
#include "Entity.hpp"
class ChunkEntity :
	public Entity
{
public:
	ChunkEntity();
	~ChunkEntity();
	void Update(sf::Time gameTime);
	void Draw(sf::RenderWindow& window);
};

