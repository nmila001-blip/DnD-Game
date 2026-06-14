#include <iostream>
#include "Hero.h"
#include "Enemy.h"
#include "Game.h"
using namespace std;
int main() {
    srand(time(NULL));
    Game game;
    game.Run();
}