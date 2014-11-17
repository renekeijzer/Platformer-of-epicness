#pragma once

#include <SFML\Graphics.hpp>
#include "GameScreen.hpp"
#include "ScreenManager.hpp"
#include "StaticLayer.hpp"
#include "PlayerEntity.hpp"
#include "PlayerRepresentation.hpp"
#include "playerController.hpp"
#include "DynamicLayer.hpp"
class Game
{
public:
	Game();
	~Game();
private:
	void run();
	sf::Clock gameTime;
};

