#include <iostream>
#include "Enemy.h"
#include "Hero.h"
using namespace std;
void Enemy::attack(Hero& hero) {
    int randomizer = rand()%25;
    int criticalHit = rand()%100+1;
    int damage = strength + randomizer;
    if(criticalHit <= 10){ // 10% chance for critical hit
        damage *= 2;
    }
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
    void Enemy::displayInfo() {
        cout << "Enemy Name: " << name << endl;
        cout << "Strength: " << strength << endl;
        cout << "Speed: " << spd << endl;
        cout << "HP: " << hp << endl;
    }