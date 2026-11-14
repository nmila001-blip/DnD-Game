#ifndef ENEMY_H
#define ENEMY_H
#include <string>
class Hero;
class Enemy {
public:
    std::string name;
    int strength;
    int spd;
    int hp;
    int defense;
    Enemy(std::string name1, int strength1, int spd1, int hp1, int defense1) : name(name1), strength(strength1), spd(spd1), hp(hp1), defense(defense1) {
    }
    Enemy() : name("Enemy"), strength(10), spd(10), hp(50), defense(5) {
    }
    void attack(Hero& hero); 
    void displayInfo();
};
#endif // ENEMY_H
