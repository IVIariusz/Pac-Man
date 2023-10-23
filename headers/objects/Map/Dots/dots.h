#ifndef DOTS
#define DOTS
#include <SFML/Graphics.hpp>
#include <iostream>
#include "renderer/renderObjectStructure.h"

class Dots {
    private:
        renderObjectStructure structureData;
        bool isTaken;
    public:
        Dots(sf::Vector2<int> pos, int type);
        renderObjectStructure returnStructure();
        bool getTakenState();
        void setTaken();
};

#endif //DOTS