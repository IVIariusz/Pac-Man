#include "renderer/renderer.h"
#include <iostream>

Renderer::Renderer(sf::RenderWindow& Renderwindow) : Renderwindow(Renderwindow) {

}

void Renderer::Render(std::vector<std::vector<renderObjectStructure>> renderData) {

    sf::Text text;
    sf::Font font;
    std::filesystem::path fontFolderPath = std::filesystem::current_path().parent_path();
    fontFolderPath /= FONT;
    text.setFont(font);

    std::filesystem::path path = fontFolderPath;
    if (!font.loadFromFile(fontFolderPath.string())){
        
    }
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::White); 




    for(int i=0; i<renderData.size(); i++)
    {
        for(int j=0; j < renderData[i].size(); j++)
        {
            renderObjectStructure tempStructure = renderData[i][j];
            sf::Sprite temp = tempStructure.sprite;
            if(tempStructure.nameOfTileMap != ""){
                temp.setTexture(manager.getTexturesAtName(tempStructure.nameOfTileMap).at(tempStructure.textureId));
                Renderwindow.draw(temp);
            } 
            else {
                text.setString(tempStructure.value);
                text.setPosition(tempStructure.sprite.getPosition().x, tempStructure.sprite.getPosition().y);
                Renderwindow.draw(text);
            }
        }
    }
}