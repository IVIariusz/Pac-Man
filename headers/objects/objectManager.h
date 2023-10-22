#ifndef OBJECTMANAGER
#define OBJECTMANAGER
#include <SFML/Graphics.hpp>
#include "settings.h"

#include "renderer/renderObjectStructure.h"
#include "objects/Entity/entityManager.h"
#include "objects/Map/mapManager.h"
#include "objects/Map/Dots/dotsManager.h"

class objectManager{
    private:
        EntityManager managerOfEntities;
        MapManager managerOfMap;
        DotsManager managerOfDots;
    public:
        objectManager();
        std::vector<std::vector<renderObjectStructure>> getObjects();
};

#endif //OBJECTMANAGER