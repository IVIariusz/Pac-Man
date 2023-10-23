#ifndef GHOST
#define GHOST
#include <SFML/Graphics.hpp>
#include <cmath>
#include <algorithm>
#include "objects/Entity/entity.h"

class Ghost : public Entity {
    private:
        sf::Clock movementClock;
        int _type;
        int direction;
    public:
        Ghost(sf::Vector2<int> pos, int type, std::string tileMapName);
        void Move() override;
        void Move2(int direction);
        void Animate() override;
        void setDirection(int n);
        bool returnFlagAt(int n);

        void CalculateDirectionToMove();
};

#endif //GHOST