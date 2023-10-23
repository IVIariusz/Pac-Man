#include "objects/UI/UIObject.h"

UIObject::UIObject(sf::Vector2<int> pos, int value) {
    structureUIDataElement.nameOfTileMap = "";
    std::ostringstream tempValue;
    tempValue << value << " pkt";
    std::string tekst = tempValue.str();
    structureUIDataElement.value = tekst;
    sf::Sprite temp;
    temp.setPosition(pos.x, pos.y);
    structureUIDataElement.sprite = temp;
}

renderObjectStructure UIObject::getStructureUI(){
    return structureUIDataElement;
}

void UIObject::setScore(int _score)
{
    score = _score;
    std::ostringstream tempValue;
    tempValue << score << " pkt";
    std::string tekst = tempValue.str();

    structureUIDataElement.value =  tempValue.str();
}

int UIObject::getScore(){
    return score;
}