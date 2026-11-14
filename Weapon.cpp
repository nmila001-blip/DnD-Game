#include <iostream>
#include <vector>
#include "Weapon.h"
using namespace std;
std::vector<Weapon> Weapon::yourWeapons;
void Weapon::addtobackpack(Weapon&weapon){
    char option;
    while(true){
    cout << "would you like to add " << weapon.name << " to your backpack? (y/n)" << endl;
    cin >> option;
    option = tolower(option);
    if(option == 'y'){
        yourWeapons.push_back(weapon);
        cout << "you have added " << weapon.name << " to your backpack" << endl;
        break;
    }
    else if(option == 'n'){
        cout << "you have chosen not to add " << weapon.name << " to your backpack" << endl;
        break;
    }
    else{
        cout << "invalid input, try again" << endl;
        continue;
    }   
}
}
void Weapon::displayBag(){

    if(yourWeapons.empty()){
        cout << "You have no weapons in your backpack." << endl;
        return;
    }
    int stuff = 0;
    for(Weapon& w : yourWeapons){
        stuff++;
        cout << stuff << ". [NEW BUILD] Weapon in backpack: " << w.name << endl;
        cout<< "Weapon damage range: " << w.minimumDamage << " - " << w.maximumDamage << endl;
        cout << "Weapon sharpness: " << w.weaponSharpness << endl;
        cout << "Weapon bonus: " << w.weaponBonus << endl;   
    }
}
void Weapon::equipWeapon(Weapon&weapon){
    if(yourWeapons.empty()){
        cout << "You have no weapons in your backpack to equip." << endl;
        return;
        
    }
    displayBag();
    while(true){
    int choice;
    cout << "Which weapon would you like to equip? (Enter the number)" << endl;
    if(!(cin >> choice)){
            cin.clear();
            cin.ignore(500, '\n');
            cout << "Invalid choice. Please select a valid weapon number." << endl;
            continue;
        }
    if(choice >= 1 && choice <= static_cast<int>(yourWeapons.size())){
        int index = choice-1; // Adjust for zero-based indexing
        *this = yourWeapons[index];
        cout << "you have equipped: " << yourWeapons[index].name << endl;
        break;

    }else{
        cout << "Invalid choice. Please select a valid weapon number." << endl;
    }
}
    cin.ignore(500, '\n');
}

