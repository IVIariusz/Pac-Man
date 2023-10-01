#pragma once
#include <vector>
#include <SFML/Graphics.hpp>
#include "renderer.h"

class renderer;

class map{
    private:
        renderer& rend;
        std::vector<renderTiles> mapTilesToRender;
        std::vector<renderTiles> pktToRender;
        sf::Vector2u mapSize;
        std::vector<std::string> mapData;

    public:
        map(renderer& renderer) : rend(renderer){};

        char getMapaAt(int x, int y);
        void getMapData(std::string url);
        void setTextures();
        void setDots();
        void updateMap();

        sf::Vector2<int> getEntityPos(int type);
};