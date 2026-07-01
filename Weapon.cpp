#include <iostream>
#include <vector>
#include "Weapon.h"
using namespace std;
void Weapon::addtobackpack(Weapon&weapon){
    cout << "Adding weapon to backpack: " << weapon.name << std::endl;
    yourWeapons.push_back(weapon);
}
void Weapon::displayBag(){
    for(Weapon& w : yourWeapons){
        cout << "Weapon in backpack: " << w.name << std::endl;
    }
}