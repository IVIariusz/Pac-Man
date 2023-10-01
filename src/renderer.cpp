#include "renderer.h"
#include <fstream>
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

renderer::renderer(sf::RenderWindow &window) : window(window){
}


void renderer::add(std::vector<renderTiles> spritesToRender){
    Renderqueue.push_back(spritesToRender);
}

sf::Texture* renderer::getTextureAt(int n)
{
    return &textures.at(n);
}

std::vector<fs::path> findPngFiles(const std::string& directoryPath) {
    std::vector<fs::path> pngFiles;

    fs::path directory(directoryPath);

    if (!fs::exists(directory) || !fs::is_directory(directory)) {
        return pngFiles; 
    }

    for (const auto& entry : fs::directory_iterator(directory)) {
        if (entry.is_regular_file() && entry.path().extension() == ".png") {
            pngFiles.push_back(entry.path());
        }
    }

    return pngFiles;
}

void renderer::loadTextures(std::string url)
{

    std::vector<fs::path> paths = findPngFiles(url);

    for(const fs::path& path : paths)
    {
        sf::Texture tileMap;

        if(!tileMap.loadFromFile(path.string().c_str())) {
            printf("Nie można wczytać tekstury: %s\n", path.c_str());
            continue; 
        }

        int x = 0, y = 0;

        if(tileMap.getSize().x < 32)
        {
            x = tileMap.getSize().x / 16;
            y = tileMap.getSize().y / 16;
        }
        else{
            x = tileMap.getSize().x / 32;
            y = tileMap.getSize().y / 32;
        }

        for(int i=0; i<x; i++)
        {
            for(int j=0; j<y; j++)
            {
                sf::Texture tempTexture;
                tempTexture.loadFromImage(tileMap.copyToImage(), sf::IntRect(32*i, 32*j, 32, 32));
                textures.push_back(tempTexture);
            }
        }
    }
}

void renderer::render(){
    window.clear();
    for(int i = 0; i < Renderqueue.size(); i++)
    {
        for(int j = 0; j < Renderqueue[i].size(); j++)
        {
            if(Renderqueue[i][j].textureID != 0) Renderqueue[i][j].sprite.setTexture(textures[Renderqueue[i][j].textureID]);
            window.draw(Renderqueue[i][j].sprite);
        }
    }

    for (int i = 0; i < Renderqueue.size(); i++) {
        int j = 0;

        while (j < Renderqueue[i].size()) {
            if (Renderqueue[i][j].isChanging) {
                Renderqueue[i].erase(Renderqueue[i].begin() + j);
            } else {
                j++;
            }
        }

        if (Renderqueue[i].empty()) {
            Renderqueue.erase(Renderqueue.begin() + i);
            i--;
        }
    }
    
    window.display();
    renderSpeed.restart();

}

void renderer::resize(int x, int y)
{
    window.setSize(sf::Vector2u(x, y));
}