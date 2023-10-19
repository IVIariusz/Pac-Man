#include <SFML/Graphics.hpp>
#include "settings.h"
#include "game.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "PACMAN");
    Game pacman(window);
    pacman.Run();
    return 0;
}
