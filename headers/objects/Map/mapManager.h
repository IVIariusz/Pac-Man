#ifndef MAPMANAGER
#define MAPMANAGER
#include <SFML/Graphics.hpp>
#include <fstream>
#include <filesystem>
#include <iostream>

#include "objects/Map/structure.h"
#include "renderer/renderObjectStructure.h"

#include "settings.h"

class MapManager {
    private:
        std::vector<std::vector<structure>> mapDataStructure;
    public:
        MapManager();
        void SetMap();
        std::vector<std::vector<structure>>& getMapDataStructure();
};

#endif // MAPMANAGER