#ifndef TEXTURELOADER
#define TEXTURELOADER
#include <SFML/Graphics.hpp>
#include <filesystem>

#include "object.h"

struct TileToRender {
    sf::Sprite tile;
    bool isChanging = false;
};

class Renderer{
    protected:
        sf::RenderWindow& window;
        std::vector<sf::Texture> textures;
        std::filesystem::path path;
        std::vector<Object> objects;
        std::vector<TileToRender> spritesToRender;
    public:
        Renderer(sf::RenderWindow &window);
        void loadTexturesToVector(std::string _path);
        void addObjectToRender(Object& temp);
        void addVectorOfStructureToRender(std::vector<Object> temp);

        void Render();
};

#endif //TEXTURELOADER