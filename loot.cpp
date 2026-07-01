#include <iostream>
#include "loot.h"
#include "Hero.h"

using namespace std;
void Loot::giveLoot(Hero& hero) {
    int lootChance = rand()%200+1 + hero.luck;
    vector<string> lootItems = {"a legendary sword", "a shield", "a potion","nothing useful just a stick","an explosion","an explosion" ,"potion", "a shield","a piece of armor", "strength potion","a ribbon"};
    if(lootChance <= 50){
        cout << "you found nothing!" << endl;

    }else{
        string whatUGet = lootItems[rand()%lootItems.size()];
        if(whatUGet == "a legendary sword"){
            hero.strength += 35;
        }
        else if(whatUGet == "a shield"){
            hero.hp += 20;
        }
        else if(whatUGet == "a potion"){
            hero.heal();
        }
        else if(whatUGet == "a piece of armor"){
            hero.hp += 10;
        }
        else if(whatUGet == "an explosion"){
            hero.hp -= 75;
        }
        else if(whatUGet == "strength potion"){
            hero.strength += 5;
        }else{
            cout << "you found " << whatUGet << " but it was useless" << endl;
        }
        if(true){
         cout << "you found " << whatUGet << endl;
        }

    }
    }