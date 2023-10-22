#include "texture/textureManager.h"

TextureManager::TextureManager(){
    TextureLoader PacmanMovementTexture(PACMAN_MOVEMENT);
    textures.push_back(PacmanMovementTexture);
    TextureLoader MapTexture(MAP_TEXTURE);
    textures.push_back(MapTexture);
    TextureLoader Pill(PILL_TEXTURE);
    textures.push_back(Pill);
    TextureLoader PowerPIll(POWER_PILL_TEXTURE);
    textures.push_back(PowerPIll);
}

std::vector<sf::Texture>& TextureManager::getTexturesAtName(std::string name) {
    int positionOfTextures;

    for(int i = 0; i < textures.size(); i++)
    {
        if(textures[i].getName() == name) positionOfTextures = i;
    }

    return textures[positionOfTextures].getTextures();
}