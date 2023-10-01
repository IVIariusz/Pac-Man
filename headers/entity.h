#pragma once
#include <SFML/Graphics.hpp>
#include "renderer.h"
#include "map.h"

class map;
class renderer;

class Entity{
    private:
        map& mapa;
        renderer& rend;
        renderTiles EntityTile;
        sf::Clock clockTime;
        bool isMoving;
        int type, animationState = 5, direction;
        float speed;
    public:
        Entity(map& mapa, renderer& rend, int _type, float _speed);
        int getAnimationState();
        void animation();
        void move();
        void update();
};