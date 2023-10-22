#ifndef ENTITY
#define ENTITY
#include <SFML/Graphics.hpp>
#include <iostream>
#include "renderer/renderObjectStructure.h"
#include "settings.h"

class Entity{
    private:
        renderObjectStructure structureData;
        sf::Clock AnimationClock;
    public:
        Entity(sf::Vector2<int> pos, int type, std::string tileMapName);
        void Animate();
        renderObjectStructure getStructure();
};

#endif //ENTITY