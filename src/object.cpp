#include "object.h"

Object::Object(){

}

ObjectStructure Object::getStructure()
{
    return structure;
}

void Object::Set(){
    structure.isSet = true;
}

void Object::setStructure(int x, int y, int textureId, bool isChanging){
    structure.pos.x = x;
    structure.pos.y = y;
    structure.textureId = textureId;
    structure.isChanging = isChanging;
    structure.isSet = false;
}