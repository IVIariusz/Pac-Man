#ifndef ENTITY
#define ENTITY
#include <SFML/Graphics.hpp>
#include <iostream>
#include "renderer/renderObjectStructure.h"
#include "settings.h"

struct Flags
{
    bool Top;
    bool Down;
    bool Right;
    bool left;
};


class Entity{
    private:
    protected:
        sf::Clock AnimationClock;
        renderObjectStructure structureData;
        Flags Coliderflags, moveFlags;
        int animationType;
        int direction;
        bool die;
        bool chase;
    public:
        Entity(sf::Vector2<int> pos, int type, std::string tileMapName);
        renderObjectStructure getStructure();
        void setFlags(bool top, bool down, bool right, bool left);
        Flags getMoveFlags();
        void setAnimationType(int n);
        Flags getColiderflags();
        virtual void Move();
        virtual void Animate();
        virtual void setChase(bool flag);
        virtual void Die();
        virtual void setTarget(int x, int y);
        bool returnDie();
        int getDirection();
        virtual bool getChase();
};

#endif //ENTITY