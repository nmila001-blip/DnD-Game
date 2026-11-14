#ifndef WEAPON_H
#define WEAPON_H
#include <string>
#include <vector>
class Weapon{
public:
int weaponSharpness;
std::string name;
int weaponBonus;
int minimumDamage;
int maximumDamage;
static std::vector<Weapon> yourWeapons;
Weapon(std::string name1, int weaponSharpness1, int weaponBonus1, int minimumDam, int maxDam) : name(name1), weaponSharpness(weaponSharpness1), weaponBonus(weaponBonus1), minimumDamage(minimumDam), maximumDamage(maxDam){
}
Weapon() : name("ur fists"), weaponSharpness(0), weaponBonus(0),minimumDamage(0), maximumDamage(5){
    yourWeapons.push_back(*this);
}
void addtobackpack(Weapon&weapon);
void displayBag();
void equipWeapon(Weapon&weapon);

};
#endif// WEAPON_H