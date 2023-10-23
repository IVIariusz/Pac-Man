#ifndef COLLISIONMANAGER
#define COLLISIONMANAGER

#include <SFML/Graphics.hpp>
#include <iostream>

#include "objects/Entity/entityManager.h"
#include "objects/Map/mapManager.h"
#include "objects/Map/Dots/dotsManager.h"

class CollisionManager {
    private:
        EntityManager& entities;
        MapManager& map;
        DotsManager& dots;
    public:
        CollisionManager(EntityManager& entities, MapManager& map, DotsManager& dots);
        void updateFlags();
};

#endif //COLLISIONMANAGER