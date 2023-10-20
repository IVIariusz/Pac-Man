#include "renderer.h"
#include "settings.h"
#include <iostream>

Renderer::Renderer(sf::RenderWindow& window) : window(window){
    std::filesystem::path textureFolderPath = std::filesystem::current_path().parent_path();
    textureFolderPath /= TEXTURE_URL;

    path = textureFolderPath;
}

void Renderer::loadTexturesToVector(std::string _path){
    path /= _path;
    sf::Texture ManagerTexture;
    ManagerTexture.loadFromFile(path.string());

    int x = ManagerTexture.getSize().x / NORMAL_TILE_SIZE;
    int y = ManagerTexture.getSize().y / NORMAL_TILE_SIZE;

    if(x == 0 && y == 0) {
        x = SMALLER_TILE_SIZE;
        y = SMALLER_TILE_SIZE;
    }

    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            sf::Texture tempTexture;
            tempTexture.loadFromImage(ManagerTexture.copyToImage(), sf::IntRect(32*i, 32*j, 32, 32));
            textures.push_back(tempTexture);
        }
    }
}

void Renderer::addObjectToRender(Object& temp)
{
    objects.push_back(temp);
}

void Renderer::Render() {
    int x;
    for(int i = objects.size() - 1; i >= 0; i--) {
        sf::Sprite tempSprite;
        if(objects[i].getStructure().isChanging || objects[i].getStructure().isSet == false)
        {
            tempSprite.setPosition(objects[i].getStructure().pos.x, objects[i].getStructure().pos.y);
            if(objects[i].getStructure().textureId != x) {
                tempSprite.setTexture(textures[objects[i].getStructure().textureId]);
                spritesToRender.push_back(tempSprite);
                x = objects[i].getStructure().textureId;
            }
            objects[i].Set();
        }
        window.draw(tempSprite);
    }

    for(int i = objects.size() - 1; i >= 0; i--) {
        if (objects[i].getStructure().isChanging) {
            objects.erase(objects.begin() + i);
        }
    }
} 