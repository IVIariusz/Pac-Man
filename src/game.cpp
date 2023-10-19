#include "game.h"
#include "renderer.h"
#include "entity.h"

Game::Game(sf::RenderWindow& window) : window(window){}

void Game::Run(){

    Entity entity;
    Renderer rend(window);
    rend.loadTexturesToVector("pac man movement.png");
    rend.addObjectToRender(entity);

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
        entity.Animate();
        rend.addObjectToRender(entity);
        rend.Render();
        window.display();
    }
}