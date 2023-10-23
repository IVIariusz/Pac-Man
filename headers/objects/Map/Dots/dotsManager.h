#ifndef DOTSMANAGER
#define DOTSMANAGER
#include <SFML/Graphics.hpp>
#include <filesystem>
#include <fstream>
#include "objects/Map/Dots/dots.h"
#include "settings.h"

class DotsManager {
    private:
        std::vector<std::vector<Dots>> dotsDataStructure;
    public:
        DotsManager();
        void SetDots(std::vector<std::string> mapData);
        std::vector<std::vector<Dots>>& getDotStructure();
        void upDateDotAt(int x, int y);
};

#endif //DOTSMANAGER