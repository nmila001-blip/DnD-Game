#include <iostream>
#include "loot.h"
#include "Hero.h"
#include "Weapon.h"

using namespace std;
void Loot::giveLoot(Hero& hero) {
    bool isUseful = true;
    int lootChance = rand()%200+1 + hero.luck;
    vector<string> lootItems = {"a legendary sword", "a shield", "a potion","nothing useful just a stick","an explosion","an explosion" ,"potion", "a shield","a piece of armor", "strength potion","a ribbon"};
    if(lootChance <= 50){
        cout << "you found nothing!" << endl;
    }else{
        string whatUGet = lootItems[rand()%lootItems.size()];
        if(whatUGet == "a legendary sword"){
            isUseful = true;
            Weapon legendarySword("The legendary sword", 100, 10, 24, 80);
            hero.currentWeapon.addtobackpack(legendarySword);
        }
        else if(whatUGet == "a shield"){
            hero.defense += 5;
            isUseful = true;
        }
        else if(whatUGet == "a potion"){
            hero.heal();
            isUseful = true;
        }
        else if(whatUGet == "a piece of armor"){
            hero.defense += 10;
            isUseful = true;
        }
        else if(whatUGet == "an explosion"){
            hero.hp -= 75;
            isUseful = false;
            cout << "you found an explosion and took 75 damage!" << endl;
            if(hero.hp <= 0){
                cout << "you have died from the explosion!" << endl;
                exit(0);
            }
        }
        else if(whatUGet == "strength potion"){
            hero.strength += 5;
            isUseful = true;
        }
        if(isUseful){
            cout << "you found " << whatUGet << endl;
        }else{
            cout << "you found " << whatUGet << " but it was useless" << endl;
        }
    }
    }
