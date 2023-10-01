#include <fstream>
#include <iostream>
#include "map.h"

void map::getMapData(std::string url){
    std::ifstream inputFile(url);
    if (!inputFile.is_open()) {
        return;
    }
    std::string line;
    while (std::getline(inputFile, line)) {
        mapData.push_back(line);
    }

    int textureID, x, y = 0;

    for(int i=0; i < mapData.size(); i++)
    {
        for(int j=0; j < mapData.at(i).length(); j++)
        {
            textureID = 0;
            if(mapData.at(i)[j] != '#')
            {
                if(y < mapData.at(i).length()) y = mapData.at(i).length();

                if(i > 0 && mapData.at(i-1)[j] == '#') textureID = textureID + 1;
                if(i+1 < mapData.size() && mapData.at(i+1)[j] == '#') textureID = textureID + 2;
                if(j > 0 && mapData.at(i)[j-1] == '#') textureID = textureID + 4;
                if(j+1 < mapData.at(i).length() && mapData.at(i)[j+1] == '#') textureID = textureID + 8;
            }
            renderTiles temp;
            temp.isChanging = false;
            temp.sprite.setPosition(j*32, i*32);
            temp.textureID = textureID;
            mapTilesToRender.push_back(temp);
        }
    }
    mapSize.x = mapData.size() * 32;
    mapSize.y = y * 32;

    setTextures();
    
    rend.resize(mapSize.x, mapSize.y);
    rend.add(mapTilesToRender);
    setDots();
}

void map::setTextures(){
    for(int i = 0; i < mapTilesToRender.size(); i++)
    {
        if(mapTilesToRender[i].textureID == 13) mapTilesToRender[i].textureID = 26;
        if(mapTilesToRender[i].textureID == 12) mapTilesToRender[i].textureID = 27;
        if(mapTilesToRender[i].textureID == 14) mapTilesToRender[i].textureID = 28;
        if(mapTilesToRender[i].textureID == 15) mapTilesToRender[i].textureID = 29;
        if(mapTilesToRender[i].textureID == 7) mapTilesToRender[i].textureID = 32;
        if(mapTilesToRender[i].textureID == 5) mapTilesToRender[i].textureID = 33;
        if(mapTilesToRender[i].textureID == 6) mapTilesToRender[i].textureID = 34;
        if(mapTilesToRender[i].textureID == 3) mapTilesToRender[i].textureID = 38;
        if(mapTilesToRender[i].textureID == 9) mapTilesToRender[i].textureID = 39;
        if(mapTilesToRender[i].textureID == 10) mapTilesToRender[i].textureID = 40;
        if(mapTilesToRender[i].textureID == 11) mapTilesToRender[i].textureID = 44;
        if(mapTilesToRender[i].textureID == 4) mapTilesToRender[i].textureID = 45;
        if(mapTilesToRender[i].textureID == 2) mapTilesToRender[i].textureID = 46;
        if(mapTilesToRender[i].textureID == 1) mapTilesToRender[i].textureID = 50;
        if(mapTilesToRender[i].textureID == 8) mapTilesToRender[i].textureID = 52;
        if(mapTilesToRender[i].textureID == 0) mapTilesToRender[i].textureID = 30;
    }
}

void map::setDots(){
    for(int i = 0; i < mapData.size(); i++)
    {
        for(int j = 0; j < mapData[i].length(); j++)
        {
            renderTiles temp;
            temp.isChanging = false;
            temp.sprite.setPosition(j*32+8, i*32+8);
            temp.textureID = 30;
            temp.sprite.setOrigin(temp.sprite.getLocalBounds().width / 2.0f, temp.sprite.getLocalBounds().height / 2.0f);
            if(mapData[i][j] == '.' || mapData[i][j] == 'o') temp.textureID = 21;
            if(mapData[i][j] == '.') {
                temp.sprite.setPosition(j*32+12, i*32+12);
                temp.sprite.setScale(0.5, 0.5);
            } 
            temp.isChanging = true;
            pktToRender.push_back(temp);
        }
    }
    rend.add(pktToRender);
}

void map::updateMap(){
    pktToRender.clear();
    setDots();
}

char map::getMapaAt(int x, int y)
{
    return mapData[x][y];
}

sf::Vector2<int> map::getEntityPos(int type)
{
    for(int i = 0; i < mapData.size(); i++)
    {
        for(int j = 0; j < mapData[i].length(); j++)
        {
            if(mapData[i][j] == '0') return sf::Vector2(j, i);
        }
    }
    return sf::Vector2(0, 0);
}