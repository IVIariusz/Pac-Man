#include <SFML/Graphics.hpp>
#include <iostream>

#include "renderer.h"
#include "map.h"
#include "entity.h"

int main()
{

    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");
    renderer rend(window);
    map mapa(rend);
    mapa.getMapData("C:/Users/mwozn/OneDrive/Pulpit/SFML/map/map1.txt");
    rend.loadTextures("C:/Users/mwozn/OneDrive/Pulpit/SFML/tiles/pac man");
    Entity pacman(mapa, rend, 1 , 1);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::Resized)
            {
                sf::FloatRect visibleArea(0, 0, event.size.width, event.size.height);
                window.setView(sf::View(visibleArea));
            }
        }
        rend.render();
        pacman.update();
        mapa.updateMap();
    }

    return 0;
}
