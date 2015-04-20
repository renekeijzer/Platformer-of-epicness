#pragma once
#include "VertexPoint.hpp"
#include "EntityRepresentation.hpp"
class ChunkRepresentation :
	public EntityRepresentation
{
public:
	ChunkRepresentation();
	~ChunkRepresentation();

	void updateVertex(std::vector<VertexPoint *> pointList);
	void Draw(sf::RenderWindow & window);
private:
	sf::VertexArray drawList;
};

