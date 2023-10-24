#include "objects/Entity/entityManager.h"

EntityManager::EntityManager(){
    std::vector<std::string> mapData;
    std::filesystem::path mapFolderPath = std::filesystem::current_path().parent_path();
    mapFolderPath /= MAP_URL;
    std::string url = mapFolderPath.string();

    std::ifstream inputFile(url);
    if (!inputFile.is_open()) {
        return;
    }
    std::string line;
    while (std::getline(inputFile, line)) {
        mapData.push_back(line);
    }

    setEntity(mapData);
}

void EntityManager::setEntity(std::vector<std::string> mapData){
    int textureID, i = 0, j = 0, x = 0, y = 0;

    for(i=0; i < mapData.size(); i++)
    {
        for(j=0; j < mapData.at(i).length(); j++)
        {
            textureID = 0;
            if(mapData.at(i)[j] == '0')
            {
                sf::Vector2<int> temp(j, i);
                entites.push_back(new PacMan(temp, 0, PACMAN_MOVEMENT));
                entites[0]->setAnimationType(1);
            }
            else if(mapData.at(i)[j] == '1')
            {
                sf::Vector2<int> temp(j, i);
                entites.push_back(new Ghost(temp, 1, GHOST_MOVEMENT, entites[0]));
            }
            else if(mapData.at(i)[j] == '2')
            {
                sf::Vector2<int> temp(j, i);
                entites.push_back(new Ghost(temp, 2, GHOST_MOVEMENT, entites[0]));
            }
            else if(mapData.at(i)[j] == '3')
            {
                sf::Vector2<int> temp(j, i);
                entites.push_back(new Ghost(temp, 3, GHOST_MOVEMENT, entites[0]));
            }
        }
    }
}

void EntityManager::Update(){

    for(int i=0; i<entites.size(); i++)
    {
        entites[i]->Move();
        entites[i]->Animate();
    }
}

std::vector<Entity*>& EntityManager::getEntities(){
    return entites;
}