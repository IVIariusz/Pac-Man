#ifndef GHOST
#define GHOST
#include <SFML/Graphics.hpp>
#include <cmath>
#include <algorithm>
#include "objects/Entity/entity.h"
#include "objects/Entity/pacman.h"

class Ghost : public Entity {
    private:
        sf::Clock movementClock;
        int _type;
        int direction;
        Entity* pacman;
        int targetX, targetY;
        bool chase, die;
        int X3, Y3;
    public:
        Ghost(sf::Vector2<int> pos, int type, std::string tileMapName, Entity* pacman);
        void Move() override;
        void Move2(int direction);
        void Animate() override;
        void setDirection(int n);
        bool returnFlagAt(int n);
        void setTarget(int x, int y) override;
        void setChase(bool flag) override;
        void Die() override;
        bool getChase() override;
        

        void CalculateDirectionToMove();
};

#endif //GHOST