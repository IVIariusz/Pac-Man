#include "objects/Map/Dots/dotsManager.h"

DotsManager::DotsManager() {
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

    SetDots(mapData);
}

void DotsManager::SetDots(std::vector<std::string> mapData) {
    int textureID, i = 0, j = 0, x = 0, y = 0;

    std::vector<Dots> lineofDots;

    for(i=0; i < mapData.size(); i++)
    {
        lineofDots.clear();
        for(j=0; j < mapData.at(i).length(); j++)
        {
            textureID = 0;
            if(mapData.at(i)[j] == '.')
            {
                sf::Vector2<int> temp(j, i);
                Dots mapStructure(temp, 1);
                lineofDots.push_back(mapStructure);
            }
            else if(mapData.at(i)[j] == 'o')
            {
                sf::Vector2<int> temp(j, i);
                Dots mapStructure(temp, 2);
                lineofDots.push_back(mapStructure);
            }
            else
            {
                sf::Vector2<int> temp(j, i);
                Dots mapStructure(temp, 3);
                lineofDots.push_back(mapStructure);           
            }
        }
        dotsDataStructure.push_back(lineofDots);
    }
}

std::vector<std::vector<Dots>>& DotsManager::getDotStructure(){
    return dotsDataStructure;
}

void DotsManager::upDateDotAt(int x, int y){
    dotsDataStructure[y][x].setTaken();
}