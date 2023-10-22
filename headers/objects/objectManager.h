#ifndef OBJECTMANAGER
#define OBJECTMANAGER
#include <SFML/Graphics.hpp>
#include "settings.h"

#include "renderer/renderObjectStructure.h"
#include "objects/Entity/entityManager.h"
#include "objects/Map/mapManager.h"

class objectManager{
    private:
        EntityManager managerOfEntities;
        MapManager managerOfMap;
    public:
        objectManager();
        std::vector<std::vector<structure>>& getObjects();
};

#endif //OBJECTMANAGER