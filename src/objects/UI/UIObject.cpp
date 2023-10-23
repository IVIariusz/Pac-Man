#include "objects/UI/UIObject.h"

UIObject::UIObject(sf::Vector2<int> pos, std::string value) {
    structureUIDataElement.nameOfTileMap = "";
    structureUIDataElement.value = value;
    sf::Sprite temp;
    temp.setPosition(pos.x, pos.y);
    structureUIDataElement.sprite = temp;
}

renderObjectStructure UIObject::getStructureUI(){
    return structureUIDataElement;
}