#ifndef DOTS
#define DOTS
#include <SFML/Graphics.hpp>
#include "renderer/renderObjectStructure.h"

class Dots {
    private:
        renderObjectStructure structureData;
    public:
        Dots(sf::Vector2<int> pos, int type);
        renderObjectStructure returnStructure();
};

#endif //DOTS