#ifndef OBJECT
#define OBJECT

#include "settings.h"
#include <SFML/Graphics.hpp>

struct ObjectStructure{
    sf::Vector2<int> pos;
    bool isChanging;
    int textureId;
    bool isSet = false;
};

class Object {
    private:
    protected:
        ObjectStructure structure;
    public:
        Object();
        void Set();
        void setTexture(int _textureId);
        ObjectStructure getStructure();
};

#endif //OBJECT