#include "objects/Entity/ghost.h"
float Calculate(int x1, int x2, int y1, int y2);
bool compareByValue(const float& a, const float& b);


Ghost::Ghost(sf::Vector2<int> pos, int type, std::string tileMapName, Entity* pacman) : Entity(pos, type, tileMapName), _type(type), pacman(pacman){
    structureData.textureId = 24 + _type;
    direction = 0;

    setTarget();
}

void Ghost::Move() {
    CalculateDirectionToMove();
    switch (direction)
    {
    case 1:
        structureData.sprite.move(0, -PACMAN_SPEED* 0.7);
        moveFlags.Top = true;
        break;
    case 2:
        structureData.sprite.move(0, PACMAN_SPEED* 0.7);
        moveFlags.Down = true;
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

void Ghost::setTarget()
{
    if(!chase)
    {
        switch (_type)
        {
        case 1:
            targetX = 0;
            targetY = 0;
            break;
        case 2:
            targetX = 672;
            targetY = 672;
            break;
        case 3:
            targetX = 0;
            targetY = 672;
            break;
        case 4:
            targetX = 672;
            targetY = 0;
            break;
        default:
            break;
        }
    }
    else if(chase)
    {
        int x = pacman->getStructure().sprite.getPosition().x;
        int y = pacman->getStructure().sprite.getPosition().y;
        targetX = x;
        targetY = y;

        switch (_type)
        {
        case 1:
            targetX = 0;
            targetY = 0;
            break;
        case 2:
            targetX = 672;
            targetY = 672;
            break;
        case 3:
            targetX = 0;
            targetY = 672;
            break;
        case 4:
            targetX = 672;
            targetY = 0;
            break;
        default:
            break;
        }
    }
}

void Ghost::Move2(int direction){

}

void Ghost::Animate(){
    
}

void Ghost::CalculateDirectionToMove() {
    int x = structureData.sprite.getPosition().x;
    int y = structureData.sprite.getPosition().y;

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
        int dir;
        if(direction == 1) dir = 2;
        if(direction == 2) dir = 1;
        if(direction == 3) dir = 4;
        if(direction == 4) dir = 3;

        if (returnFlagAt(index) == true && index!=dir) {
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
    return std::abs(std::sqrt(dx * dx + dy * dy));
}

void Ghost::setChase(bool flag){
    chase = flag;
    setTarget();
}

void Ghost::Die() {
    
}