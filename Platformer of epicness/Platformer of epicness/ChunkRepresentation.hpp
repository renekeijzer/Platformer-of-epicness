#pragma once
#include "VertexPoint.hpp"
#include "EntityRepresentation.hpp"
class ChunkRepresentation :
	public EntityRepresentation
{
public:
	ChunkRepresentation();
	~ChunkRepresentation();
	void addPoint(VertexPoint* point);
	void setUpdate(bool set){ update = set; }
	void Draw(sf::RenderWindow & window);
private:
	std::vector<VertexPoint*> pointList;
	sf::VertexArray drawList;
	void updateVertex();
	bool update; //!<Set this if an vertex update is required
};

