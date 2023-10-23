#include "objects/UI/UI.h"

UIManger::UIManger(){
    sf::Vector2<int> pos(10, 5);
    UIObject Score(pos, 0);
    UIobjects.push_back(Score);

    sf::Vector2<int> pos2(400, 5);
    UIObject BestScore(pos2, 0);
    UIobjects.push_back(BestScore);
}

std::vector<UIObject>& UIManger::getUI(){
    return UIobjects;
}

void UIManger::setScore(int score){
    UIobjects[0].setScore(score);
}

void UIManger::setBestScore(int score) {
    UIobjects[1].setScore(score);
}

void UIManger::addScore(int score)
{
    setScore(UIobjects[0].getScore() + score);
}