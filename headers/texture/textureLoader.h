#ifndef TEXTURELOADER
#define TEXTURELOADER

#include <SFML/Graphics.hpp>
#include "settings.h"

class TextureLoader {
    private:
        std::string name;
        std::vector<sf::Texture> textures;
    public:
        TextureLoader(std::string _path);
        std::vector<sf::Texture>& getTextures();
        std::string getName();
};


#endif //TEXTURELOADER
