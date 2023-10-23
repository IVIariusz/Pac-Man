#ifndef UI
#define UI
#include <SFML/Graphics.hpp>
#include "objects/UI/UIObject.h"

class UIManger {
    private:
        std::vector<UIObject> UIobjects;
    public:
        UIManger();
        std::vector<UIObject>& getUI();
};

#endif //UI