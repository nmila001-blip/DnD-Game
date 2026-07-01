#include <iostream>
#include "Hero.h"
#include "Enemy.h"
#include "Game.h"
#include "Weapon.h"
using namespace std;
int main() {
    srand(time(NULL));
    Weapon weapon;
    weapon.displayBag();
    Game game;
    game.Run();
}