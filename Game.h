#ifndef GAME_H
#define GAME_H
#include <string>
#include <vector>
#include "Hero.h"
#include "Enemy.h"
class Game {
public:
    void combat(std::vector<Enemy> &enemies);
    void levelOne();
    void levelTwo();
    void levelThree();
    void Run();
    
};
#endif // GAME_H