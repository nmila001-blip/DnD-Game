#include <iostream>
#include "Enemy.h"
#include "Hero.h"
using namespace std;
void Enemy::attack(Hero& hero) {
    int randomizer = rand()%25;
    int damage = strength + randomizer;
    if (damage < 0) {
        damage = 0;
    }
    hero.hp -= damage;
    if (hero.hp < 0) {
        hero.hp = 0;
    }
    cout << name << " attacks " << hero.name << " for " << damage << " damage!" << endl;
    cout << "your hp: " << hero.hp << endl;
   }