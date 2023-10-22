#ifndef GAME
#define GAME
#include <SFML/Graphics.hpp>
#include "texture/textureManager.h"

class Game {
    private:
        sf::RenderWindow& GameWindow;
        TextureManager managerOfTexture;
    public:
        Game(sf::RenderWindow& window);
        void Run();
};

#endif //GAME