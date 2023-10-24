#include "objects/Entity/ghost.h"
float Calculate(int x1, int x2, int y1, int y2);
bool compareByValue(const float& a, const float& b);


Ghost::Ghost(sf::Vector2<int> pos, int type, std::string tileMapName, Entity* pacman) : Entity(pos, type, tileMapName), _type(type), pacman(pacman){
    structureData.textureId = 24 + _type;
    direction = 0;
}

void Ghost::Move() {
    CalculateDirectionToMove();
    switch (direction)
    {
    case 1:
        structureData.sprite.move(0, -PACMAN_SPEED* 0.7);
        moveFlags.Top = true;
        std::cout << "b";
        break;
    case 2:
        structureData.sprite.move(0, PACMAN_SPEED* 0.7);
        moveFlags.Down = true;
        std::cout << "a";
        break;
    case 3:
        structureData.sprite.move(-PACMAN_SPEED* 0.7, 0);
        moveFlags.left = true;
        break;
    case 4:
        structureData.sprite.move(PACMAN_SPEED * 0.7, 0);
        moveFlags.Right = true;
        break;
    
    default:
        structureData.sprite.move(0, 0);
        break;
    }
}

void Ghost::Move2(int direction){

}

void Ghost::Animate(){
    
}

void Ghost::CalculateDirectionToMove() {
    int noDirection;

    int x = structureData.sprite.getPosition().x;
    int y = structureData.sprite.getPosition().y;

    int targetX = pacman->getStructure().sprite.getPosition().x;
    int targetY = pacman->getStructure().sprite.getPosition().y;

    std::cout << "  " << std::endl;
    float top = Calculate(x, targetX, y - NORMAL_TILE_SIZE, targetY);
    float bottom = Calculate(x, targetX, y + NORMAL_TILE_SIZE, targetY);
    float left = Calculate(x - NORMAL_TILE_SIZE, targetX, y, targetY);
    float right = Calculate(x + NORMAL_TILE_SIZE, targetX, y, targetY);

    std::vector<float> lista = {top, bottom, left, right};
    std::vector<int> indeksy = {1, 2, 3, 4};

    std::sort(indeksy.begin(), indeksy.end(), [&lista](int a, int b) {
        return compareByValue(lista[a - 1], lista[b - 1]);
    });

     for (int index : indeksy) {
        if (returnFlagAt(index) == true) {
            std::cout << index << " ";
            direction = index;
            break;
        }
    }

}

bool compareByValue(const float& a, const float& b) {
    return a < b;
}


bool Ghost::returnFlagAt(int n)
{
    if(n == 1) return Coliderflags.Top;
    if(n == 2) return Coliderflags.Down;
    if(n == 3) return Coliderflags.left;
    if(n == 4) return Coliderflags.Right;
    return false;
}

float Calculate(int x1, int x2, int y1, int y2)
{
    float dx = x2 - x1;
    float dy = y2 - y1;
    std::cout << std::abs(std::sqrt(dx * dx + dy * dy)) << std::endl;
    return std::abs(std::sqrt(dx * dx + dy * dy));
}