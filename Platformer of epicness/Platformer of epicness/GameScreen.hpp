#pragma once
#include "Screen.hpp"
#include "UIlayer.hpp"
#include "ScreenManager.hpp"
#include "Scene.hpp"
class GameScreen : public Screen
{
public:
	GameScreen(std::string name);
	static Screen* create(std::string name);
	void update(sf::Time gameTime);
	void draw(sf::RenderWindow & window);
	~GameScreen();

	sf::Text * frames, *pos, *text, *elapsed;
private:
	std::map<std::string, Scene*> sceneList;
	int fps;
	sf::Time elapsedTime;
};

