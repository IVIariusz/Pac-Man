#ifndef COLLISIONMANAGER
#define COLLISIONMANAGER

#include <SFML/Graphics.hpp>
#include <iostream>

#include "objects/Entity/entityManager.h"
#include "objects/Map/mapManager.h"
#include "objects/Map/Dots/dotsManager.h"
#include "objects/UI/UI.h"

class CollisionManager {
    private:
        EntityManager& entities;
        MapManager& map;
        DotsManager& dots;
        UIManger& ui;
    public:
        CollisionManager(EntityManager& entities, MapManager& map, DotsManager& dots, UIManger& ui);
        void updateFlags();
        void checkDotsCollision();
};

#endif //COLLISIONMANAGER