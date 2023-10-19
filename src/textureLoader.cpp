#include "textureLoader.h"
#include "settings.h"


TextureLoader::TextureLoader(){
    std::filesystem::path textureFolderPath = std::filesystem::current_path().parent_path();
    textureFolderPath /= TEXTURE_URL;

    path = textureFolderPath;
}

void TextureLoader::loadTexturesToVector(std::string _path){
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
            sf::FloatRect(i*NORMAL_TILE_SIZE, j*NORMAL_TILE_SIZE, NORMAL_TILE_SIZE, NORMAL_TILE_SIZE);
            
        }
    }
}