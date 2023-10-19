#ifndef GAME
#define GAME

#include <SFML/Graphics.hpp>

class Game{
    private:
        sf::RenderWindow& window;
    public:
        Game(sf::RenderWindow& window);
        void Run();
};


#endif //GAME