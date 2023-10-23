#include "objects/UI/UI.h"

UIManger::UIManger(){
    sf::Vector2<int> pos(10, 5);
    UIObject Score(pos, "Score: 0 pkt");
    UIobjects.push_back(Score);

    sf::Vector2<int> pos2(400, 5);
    UIObject BestScore(pos2, "Best: 0 pkt");
    UIobjects.push_back(BestScore);
}

std::vector<UIObject>& UIManger::getUI(){
    return UIobjects;
}
