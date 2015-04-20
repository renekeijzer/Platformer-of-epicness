#pragma once
#include "VertexPoint.hpp"
#include "Entity.hpp"
#include "ChunkRepresentation.hpp"
class ChunkEntity :
	public Entity
{
public:
	ChunkEntity();
	~ChunkEntity();
	void addPoint(int x, int y);
	void addPoint(sf::Vector2f pos);
	void addPoint(VertexPoint * pt);
	void Update(sf::Time gameTime);
	void Draw(sf::RenderWindow& window);
private:
	std::vector<VertexPoint*> pointList;

};

