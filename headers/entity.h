#ifndef ENTITY
#define ENTITY
#include "object.h"

class Entity : public Object{
    private:
        sf::Clock animationClock;
    public:
        Entity();
        void Move();
        void checkCollision();
        void Animate();
};

#endif //ENTITY