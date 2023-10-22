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

    std::cout << textures.size() << std::endl;
}

std::vector<sf::Texture>& TextureLoader::getTextures() {
    return textures;
}

std::string TextureLoader::getName() {
    return name;
}