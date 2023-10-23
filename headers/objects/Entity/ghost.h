#ifndef GHOST
#define GHOST
#include <SFML/Graphics.hpp>
#include "objects/Entity/entity.h"

class Ghost : public Entity {
    private:
        sf::Clock movementClock;
        int _type;
    public:
        Ghost(sf::Vector2<int> pos, int type, std::string tileMapName);
        void Move() override;
        void Animate() override;
};

#endif //GHOST