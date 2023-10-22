#include <filesystem>
#include <iostream>

#include "texture/textureLoader.h"

TextureLoader::TextureLoader(std::string _path)
{
    name = _path;

    std::filesystem::path textureFolderPath = std::filesystem::current_path().parent_path();
    textureFolderPath /= TEXTURE_URL;

    std::filesystem::path path = textureFolderPath;

    path /= _path;
    sf::Texture ManagerTexture;
    ManagerTexture.loadFromFile(path.string());
    int x, y;

    if(ManagerTexture.getSize().x < 32)
    {
        x = ManagerTexture.getSize().x / 16;
        y = ManagerTexture.getSize().y / 16;
        if(ManagerTexture.getSize().x < 16)
        {
            x = ManagerTexture.getSize().x / 8;
            y = ManagerTexture.getSize().y / 8;
        }
    }
    else{
        x = ManagerTexture.getSize().x / 32;
        y = ManagerTexture.getSize().y / 32;
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

std::vector<sf::Texture>& TextureLoader::getTextures() {
    return textures;
}

std::string TextureLoader::getName() {
    return name;
}