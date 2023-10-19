#ifndef TEXTURELOADER
#define TEXTURELOADER
#include <SFML/Graphics.hpp>
#include <filesystem>

class TextureLoader{
    protected:
        std::vector<sf::Texture> textures;
        std::filesystem::path path;
    public:
        TextureLoader();
        void loadTexturesToVector(std::string _path);
};

#endif //TEXTURELOADER