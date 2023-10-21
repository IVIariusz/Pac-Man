#ifndef ENTITY
#define ENTITY
#include "object.h"
#include "map.h"
#include "collisionManager.h"


class Entity : public Object{
    private:
        sf::Clock animationClock;
        bool isMoving;
        map& mapa;
        CollisionManager manager;
    public:
        Entity(map& mapa);
        void Move(int x, int y);
        void checkCollision();
        void Animate();
};

#endif //ENTITY