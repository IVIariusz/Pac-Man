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
        }
    }
    for(int i = 0; i < mapData.size(); i++)
    {
        for(int j = 0; j < mapData.at(i).length(); j++)
        {
            if(mapData.at(i)[j] == '1')
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
            else if(mapData.at(i)[j] == '4')
            {
                sf::Vector2<int> temp(j, i);
                entites.push_back(new Ghost(temp, 4, GHOST_MOVEMENT, entites[0]));
            }
        }
    }

}

void EntityManager::Update(){

    if(time.getElapsedTime().asSeconds() >= SCATTER_TIME && entites.at(2)->getChase() == false)
    {
        for(int i=1; i<entites.size(); i++)
        {
            entites[i]->setChase(true);
            entites[i]->setTarget(entites[3]->getStructure().sprite.getPosition().x, entites[3]->getStructure().sprite.getPosition().y);
        }
        time.restart();
    }
    else if(time.getElapsedTime().asSeconds() >= CHASE_TIME && entites.at(2)->getChase() == true)
    {
        for(int i=1; i<entites.size(); i++)
        {
            entites[i]->setChase(false);
        } 
        time.restart();
    }

    for(int i=0; i<entites.size(); i++)
    {
        entites[i]->Move();
        entites[i]->Animate();
    }
}

std::vector<Entity*>& EntityManager::getEntities(){
    return entites;
}