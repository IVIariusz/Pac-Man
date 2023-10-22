#ifndef GAME
#define GAME
#include <SFML/Graphics.hpp>
#include "renderer/renderer.h"
#include "objects/objectManager.h"

class Game {
    private:
        sf::RenderWindow& GameWindow;
        Renderer GameRenderer;
        objectManager ManagerOfObjects;
    public:
        Game(sf::RenderWindow& window);
        void Run();
};

#endif //GAME