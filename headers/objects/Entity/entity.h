#ifndef ENTITY
#define ENTITY
#include <SFML/Graphics.hpp>
#include <iostream>
#include "renderer/renderObjectStructure.h"
#include "settings.h"

class Entity{
    private:
        sf::Clock AnimationClock;
    protected:
        renderObjectStructure structureData;
    public:
        Entity(sf::Vector2<int> pos, int type, std::string tileMapName);
        void Animate();
        renderObjectStructure getStructure();
        virtual void Move();
};

#endif //ENTITY