#include <iostream>
#include "Hero.h"
#include "Enemy.h"
using namespace std;
void Hero::attack(Enemy& enemy) {
    int criticalHit = rand()%100+1;
    int randomizer = rand()%25;
    int damage = strength + randomizer;
    if(criticalHit <= 10){ // 10% chance for critical hit
        damage *= 2;
    }
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
    getline(cin, name);
    cout << "what is your strength?" << endl;
    if(!(cin >> strength)){
        cout << "invalid input, try again" << endl;
        cin.clear();
        cin.ignore(500, '\n');
        continue;
    }
    cout << "what is your speed?" << endl;
    if(!(cin >> spd)){
        cout << "invalid input, try again" << endl;
        cin.clear();
        cin.ignore(500, '\n');
        continue;
    }
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