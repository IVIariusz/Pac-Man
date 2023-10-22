#include "objects/objectManager.h"

objectManager::objectManager() {

}

std::vector<std::vector<renderObjectStructure>> objectManager::getObjects(){
    managerOfEntities.Update();
    std::vector<std::vector<renderObjectStructure>> toReturn;
    std::vector<renderObjectStructure> temp;
    for(int i=0; i < managerOfMap.getMapDataStructure().size(); i++)
    {
        temp.clear();
        for(int j=0; j < managerOfMap.getMapDataStructure()[i].size(); j++)
        {
            temp.push_back(managerOfMap.getMapDataStructure()[i].at(j).returnObjectStructure());
        }
        toReturn.push_back(temp);
    }
    for(int i = 0; i < managerOfDots.getDotStructure().size(); i++)
    {
        temp.clear();
        for(int j = 0; j < managerOfDots.getDotStructure()[i].size(); j++)
        {
            temp.push_back(managerOfDots.getDotStructure()[i].at(j).returnStructure());
        }
        toReturn.push_back(temp);
    }

    for(int i = 0; i < managerOfEntities.getEntities().size(); i++)
    {
        temp.push_back(managerOfEntities.getEntities()[i].getStructure());        
    }
    toReturn.push_back(temp);

    return toReturn;
}