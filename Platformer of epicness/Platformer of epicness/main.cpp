#include <SFML\Graphics.hpp>

int main(){
	sf::RenderWindow window(sf::VideoMode( 800, 600), "Platformer of epicness");
	window.setFramerateLimit(60);
	while (window.isOpen()){
		sf::Event event;
		window.clear();
		window.display();

		while (window.pollEvent(event)){
			if (event.type == sf::Event::Closed){
				window.close();
			}
		}
	}
	return 0;

}