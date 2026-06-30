#ifndef HERO_H
#define HERO_H
#include <string>
class Enemy;
class Hero {
public:

std::string name;
int strength;
int spd;
int hp;
int luck;
Hero(std::string name1, int strength1, int spd1, int hp1, int luck1) : name(name1), strength(strength1), spd(spd1), hp(hp1), luck(luck1) {
}
   Hero() : name("NPC"), strength(10), spd(10), hp(50), luck(20) {
   }
   void attack(Enemy& enemy);
   void displayInfo();
   void heal();
void nameing();
};
#endif // HERO_H