#include <iostream>
#include <vector>
#include "Weapon.h"
using namespace std;
std::vector<Weapon> Weapon::yourWeapons;
void Weapon::addtobackpack(Weapon&weapon){
    cout << "Adding weapon to backpack: " << weapon.name << endl;
    yourWeapons.push_back(weapon);
}
void Weapon::displayBag(){

    for(Weapon& w : yourWeapons){
        if(yourWeapons.empty()){
            cout << "You have no weapons in your backpack." << endl;
            exit(0);
        }
        stuff++;
        cout << stuff <<"Weapon in backpack: " << w.name <<   endl;
        
    }
}
void Weapon::equipWeapon(Weapon&weapon){
    displayBag();
    if(yourWeapons.empty()){
        cout << "You have no weapons in your backpack to equip." << endl;
        exit(0);
    }
    int nameofWeapon;
    cout << "Which weapon would you like to equip? (Enter the name)" << endl;
    cin >> nameofWeapon;
    if(nameofWeapon == stuff){
        cout << "You have equipped: " << weapon.name << endl;
    }
}

