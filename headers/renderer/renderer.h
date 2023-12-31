#ifndef RENDERER
#define RENDERER
#include <SFML/Graphics.hpp>
#include "texture/textureManager.h"
#include "renderer/renderObjectStructure.h"
#include "objects/Map/structure.h"
#include <filesystem>

class Renderer {
    private:
        TextureManager manager;
        sf::RenderWindow& Renderwindow;
    public:
        Renderer(sf::RenderWindow& Renderwindow);
        void Render(std::vector<std::vector<renderObjectStructure>> renderData);
};

#endif //RENDERER