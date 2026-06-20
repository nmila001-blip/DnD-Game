#include <iostream>
#include "Hero.h"
#include "Enemy.h"
using namespace std;
void Hero::attack(Enemy& enemy) {
    int randomizer = rand()%25;
    int damage = strength + randomizer;
    if (damage < 0) {
        damage = 0;
    }
    enemy.hp -= damage;
    if (enemy.hp < 0) {
        enemy.hp = 0;
    }
    cout << name << " attacks " << enemy.name << " for " << damage << " damage!" << endl;

   }
void Hero::displayInfo() {
    cout << "Hero Name: " << name << endl;
    cout << "Strength: " << strength << endl;
    cout << "Speed: " << spd << endl;
    cout << "HP: " << hp << endl;
    cout << "Luck: " << luck << endl;
}
   void Hero::heal() {
    int healAmount = rand()%50+1;
    hp += healAmount;
    if (hp > 100) {
        hp = 100;
    }
    cout << "your HP is now at " <<hp << endl;
}
void Hero::nameing() {
    while(true){
    cout << "what is your name?" << endl;
    cin >> name;
    cout << "what is your strength?" << endl;
    cin >> strength;
    cout << "what is your speed?" << endl;
    cin >> spd;
    if(strength < 0 || spd < 0){
        cout << "invalid input, try again" << endl;
        continue;
    }
    else if(strength > 20 || spd > 20){
        cout << "invalid input, try again" << endl;
        continue;
    }
    hp = 100;
    luck = rand()%25+1;
    break;
}
}