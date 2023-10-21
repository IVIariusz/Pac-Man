#ifndef COLLISIONMANAGER
#define COLLISIONMANAGER
#include "map.h"
#include "settings.h"

class CollisionManager{
    private:
        map& mapa;
        std::vector<Object> mapData;
    public:
        CollisionManager(map& mapa);
        bool checkCollisionAt(int x, int y, float EntityPosX, float EntityPosY);
};

#endif //COLLISIONMANAGER