#ifndef OBJECT
#define OBJECT

#include "settings.h"
#include <SFML/Graphics.hpp>

struct ObjectStructure{
    sf::Vector2<int> pos;
    bool isChanging;
    int textureId;
    bool isSet = false;
    float size = 1;
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
        void setStructure(int x, int y, int textureId, bool isChanging);
};

#endif //OBJECT