#ifndef ENTITYMANAGER
#define ENTITYMANAGER
#include <SFML/Graphics.hpp>
#include <filesystem>
#include <fstream>
#include "settings.h"
#include "objects/Entity/entity.h"


class EntityManager {
    private:
        std::vector<Entity> entites;
    public: 
        EntityManager();
        void setEntity(std::vector<std::string> mapData);
        void Update();
        std::vector<Entity>& getEntities();
};

#endif //ENTITYMANAGER