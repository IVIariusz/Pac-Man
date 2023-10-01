#pragma once
#include <SFML/Graphics.hpp>

struct renderTiles{
    sf::Sprite sprite;
    bool isChanging;
    int textureID;
};

class renderer{
    private:
        sf::RenderWindow& window;
        std::vector<std::vector<renderTiles>> Renderqueue;
        std::vector<sf::Texture> textures;
        sf::Clock renderSpeed;

    public:
        renderer(sf::RenderWindow &window);
        void add(std::vector<renderTiles> spritesToRender);
        void render();
        void loadTextures(std::string url);
        void resize(int x, int y);
        sf::Texture* getTextureAt(int n);

};