#ifndef TEXTUREMANAGER
#define TEXTUREMANAGER

#include <SFML/Graphics.hpp>
#include <vector>

#include "settings.h"
#include "textureLoader.h"

class TextureManager {
private:
    std::vector<TextureLoader> textures;
public:
    TextureManager();
    std::vector<sf::Texture>& getTexturesAtName(std::string name);
};

#endif // TEXTUREMANAGER
