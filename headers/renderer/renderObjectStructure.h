#ifndef RENDEROBJECTSTRUCTURE
#define RENDEROBJECTSTRUCTURE

#include <SFML/Graphics.hpp>
#include <string>


struct renderObjectStructure
{
    int textureId;
    std::string nameOfTileMap;
    sf::Sprite sprite;
};


#endif //RENDEROBJECTSTRUCTURE