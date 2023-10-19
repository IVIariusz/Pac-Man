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