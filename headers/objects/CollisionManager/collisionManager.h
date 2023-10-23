#ifndef COLLISIONMANAGER
#define COLLISIONMANAGER

#include <SFML/Graphics.hpp>
#include <iostream>

#include "objects/Entity/entityManager.h"
#include "objects/Map/mapManager.h"

class CollisionManager {
    private:
        EntityManager& entities;
        MapManager& map;
    public:
        CollisionManager(EntityManager& entities, MapManager& map);
        void updateFlags();
};

#endif //COLLISIONMANAGER