#ifndef UIOBJECT
#define UIOBJECT
#include <SFML/Graphics.hpp>
#include "renderer/renderObjectStructure.h"

class UIObject {
    private:
        renderObjectStructure structureUIDataElement;
    public:
        UIObject(sf::Vector2<int> pos, std::string value);
        renderObjectStructure getStructureUI();
};

#endif //UOBJECT