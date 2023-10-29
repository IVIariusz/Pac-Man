#include "game.h"

Game::Game(sf::RenderWindow& window) : GameRenderer(window), GameWindow(window){

}

void Game::Run() {
    while (GameWindow.isOpen()) {
        sf::Event event;
        while (GameWindow.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                GameWindow.close();
            }
            if(event.type == sf::Event::Resized) {
                sf::FloatRect visibleArea(0, 0, event.size.width, event.size.height);
                GameWindow.setView(sf::View(visibleArea));
            }
        }
        GameWindow.clear();
        GameRenderer.Render(ManagerOfObjects.getObjects());
        GameWindow.display();

        if(ManagerOfObjects.returnGoing() == false) break;
    }
}