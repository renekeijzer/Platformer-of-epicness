#pragma once
#include "Screen.hpp"
#include "UIlayer.hpp"
#include "Scene.hpp"
class GameScreen : public Screen
{
public:
	GameScreen(std::string name);
	static GameScreen* create(std::string name);
	void update(sf::Time gameTime) override;
	void draw(sf::RenderWindow & window) override;
	~GameScreen();

	sf::Text * frames, *pos, *text, *elapsed;
private:
	std::list<std::string, Scene*> sceneList;
	int fps;
	sf::Time elapsedTime;
};

