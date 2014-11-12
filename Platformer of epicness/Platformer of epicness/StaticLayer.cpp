#include "StaticLayer.hpp"


StaticLayer::StaticLayer()
{
}


StaticLayer::~StaticLayer()
{
}


void StaticLayer::Draw(sf::RenderWindow& window)
{
	if (active){
		if (EntityList.size() > 0){

			int layerWidth = representation.width / 32;
			int windowy = (int)(window.getView().getCenter().y - (window.getView().getSize().y / 2));
			int windowx = (int)(window.getView().getCenter().x - (window.getView().getSize().x / 2));

			for (int y = windowy / 32; y < windowy / 32 + window.getView().getSize().y / 32; y++){
				for (int x = windowx / 32; x < windowx / 32 + window.getView().getSize().x / 32; x++){
					int pos = y*layerWidth + x;

					if (pos >= 0 && (unsigned)pos < EntityList.size()){
						EntityList.at(pos)->draw(window);
					}
				}
			}
		}
	}
}

