#ifndef MAP
#define MAP
#include <SFML/Graphics.hpp>
#include <fstream>
#include <iostream>

#include "object.h"


class map {
    private:
        std::vector<std::string> mapData;
        std::vector<Object> mapa;
    public:
        map();
        void setMap(std::string url);

        std::vector<Object> returnToRender();
};

#endif //MAP