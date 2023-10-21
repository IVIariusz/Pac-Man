#include "game.h"
#include "renderer.h"
#include "entity.h"
#include "map.h"
#include "collisionManager.h"

Game::Game(sf::RenderWindow& window) : window(window){}

void Game::Run(){

    map mapa;
    Renderer entityRenderer(window);
    Renderer mapRenderer(window);
    entityRenderer.loadTexturesToVector("pac man movement.png");
    mapRenderer.loadTexturesToVector("map.png");
    mapa.setMap("C:\\Users\\mwozn\\OneDrive\\Pulpit\\SFML\\map\\map1.txt");
    mapRenderer.addVectorOfStructureToRender(mapa.returnToRender());
    Entity entity(mapa);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if(event.type == sf::Event::Resized) {
                sf::FloatRect visibleArea(0, 0, event.size.width, event.size.height);
                window.setView(sf::View(visibleArea));
            }
        }
        window.clear();
            mapRenderer.Render();
            entityRenderer.Render();
            entity.Move(2, 2);
            entityRenderer.addObjectToRender(entity);
        window.display();
    }
}