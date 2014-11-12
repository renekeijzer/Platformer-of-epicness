#pragma once
#include "Screen.hpp"
#include "Scene.hpp"
class GameScreen : public Screen
{
public:
	GameScreen(std::string name);

	void update(sf::Time gameTime) override;
	void draw(sf::RenderWindow & window) override;
	~GameScreen();
private:
	std::list<std::string, Scene*> sceneList;

};

