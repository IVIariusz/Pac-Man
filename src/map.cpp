#include "map.h"
#include "settings.h"

map::map(){

}

void map::setMap(std::string url){
    std::ifstream inputFile(url);
    if (!inputFile.is_open()) {
        return;
    }
    std::string line;
    while (std::getline(inputFile, line)) {
        mapData.push_back(line);
    }
    int textureID, i = 0, j = 0, x = 0, y = 0;

    for(i=0; i < mapData.size(); i++)
    {
        for(j=0; j < mapData.at(i).length(); j++)
        {
            textureID = 0;
            if(mapData.at(i)[j] != '#')
            {
                if(y < mapData.at(i).length()) y = mapData.at(i).length();

                if(i > 0 && mapData.at(i-1)[j] == '#') textureID = textureID + 1; //gora
                if(i+1 < mapData.size() && mapData.at(i+1)[j] == '#') textureID = textureID + 2; //dol
                if(j > 0 && mapData.at(i)[j-1] == '#') textureID = textureID + 4; //lewo
                if(j+1 < mapData.at(i).length() && mapData.at(i)[j+1] == '#') textureID = textureID + 8; //prawo
                int tempId;

                if(textureID == 13) tempId = 1;
                if(textureID == 12) tempId = 2;
                if(textureID == 14) tempId = 3;
                if(textureID == 15) tempId = 4;
                if(textureID == 7) tempId = 5;
                if(textureID == 5) tempId = 6;
                if(textureID == 6) tempId = 7;
                if(textureID == 3) tempId = 9;
                if(textureID == 9) tempId = 10;
                if(textureID == 10) tempId = 11;
                if(textureID == 11) tempId = 13;
                if(textureID == 4) tempId = 14;
                if(textureID == 8) tempId = 20;
                if(textureID == 1) tempId = 18;
                if(textureID == 2) tempId = 15;

                if(textureID == 0) tempId = 19;

                Object tempMapField;
                tempMapField.setStructure((j * NORMAL_TILE_SIZE), (i * NORMAL_TILE_SIZE), tempId - 1, false);
                mapa.push_back(tempMapField);
            }
            else
            {
                Object tempMapField;
                tempMapField.setStructure((j * NORMAL_TILE_SIZE), (i * NORMAL_TILE_SIZE), 15, false);
                mapa.push_back(tempMapField);
            }
        }
    }

    std::cout << "rozmiar: " << mapa.size();
}

std::vector<Object> map::returnToRender(){
    return mapa;
}

std::vector<std::string> map::returnMapData(){
    return mapData;
}