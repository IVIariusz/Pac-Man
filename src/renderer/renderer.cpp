#include "renderer/renderer.h"
#include <iostream>

Renderer::Renderer(sf::RenderWindow& Renderwindow) : Renderwindow(Renderwindow) {

}

void Renderer::Render(std::vector<std::vector<structure>> renderData) {
    std::cout << renderData.size() << std::endl;
    for(int i=0; i<renderData.size(); i++)
    {
        for(int j=0; j < renderData.size(); j++)
        {
            renderObjectStructure tempStructure = renderData[i][j].returnObjectStructure();
            sf::Sprite temp = tempStructure.sprite;
            temp.setTexture(manager.getTexturesAtName(tempStructure.nameOfTileMap).at(tempStructure.textureId));
            Renderwindow.draw(temp);
        }
    }
}