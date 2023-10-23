#ifndef UIOBJECT
#define UIOBJECT
#include <SFML/Graphics.hpp>
#include <sstream>
#include "renderer/renderObjectStructure.h"

class UIObject {
    private:
        renderObjectStructure structureUIDataElement;
        int score;
    public:
        UIObject(sf::Vector2<int> pos, int score);
        renderObjectStructure getStructureUI();
        void setScore(int score);
        int getScore();
};

#endif //UOBJECT