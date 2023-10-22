#include "objects/objectManager.h"

objectManager::objectManager() {

}

std::vector<std::vector<structure>>& objectManager::getObjects(){
    return managerOfMap.getMapDataStructure();
}