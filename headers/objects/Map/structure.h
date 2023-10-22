#ifndef STRUCTURE
#define STRUCTURE
#include <SFML/Graphics.hpp>
#include "renderer/renderObjectStructure.h"
#include "settings.h"


class structure {
    private:
        renderObjectStructure structureData;
    public:
        structure(int textureID, sf::Vector2<int> pos);
        renderObjectStructure returnObjectStructure();
};

#endif //STRUCTURE