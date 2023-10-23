#ifndef UI
#define UI
#include <SFML/Graphics.hpp>
#include <iostream>
#include "objects/UI/UIObject.h"

class UIManger {
    private:
        std::vector<UIObject> UIobjects;
    public:
        UIManger();
        std::vector<UIObject>& getUI();
        void setScore(int score);
        void addScore(int score);
        void setBestScore(int score);
};

#endif //UI