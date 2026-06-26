#include <iostream>
#include "Game.h"
#include "Hero.h"
#include "loot.h"
#include "Enemy.h"
#include <vector>
using namespace std;
Hero hero;
void Game::combat(std::vector<Enemy> &enemies) {
    Loot loot;
    bool algo = true;
    int something = 0;
    for(Enemy& enemy : enemies) {
        if(enemy.name =="zombie"){
            cout << "You smell a pungent smell\n";
            cout << "and it grows stronger as time goes time\n";
            cout << "and then a group of zombies appear\n";
        }
        else if(enemy.name == "skeleton"){
            cout<< "you start to hear faint clacking\n";
            cout << "over time the clacking gets louder\n until a skeleton archer appears and begins to start shooting at you do you\n";
        }
        else if(enemy.name == "living armor"){
            cout << "you enter a room full of armour and you sense some thing ominous\n";
            cout << "almost as if their alive?\n";
            cout << "then suddenly a suit of armor stumbles forward\n then sprints twords you,raises its sword and brings it down hard\n";
        }
        else if (enemy.name == "living canon"){
            cout <<"you find a canon but it seems different and then suddenly it attacks\n";
            enemy.attack(hero);
        }
if(enemy.name == "Timmy_Tuff_Knuckles") {
    cout << "boss intro text";
}

        do{
            int choice;
            cout << "Would you like to: " << endl;
            cout << "1. Attack" << endl;
            cout << "2. Heal" << endl;
            cout << "3. run away" <<endl;
            cout << "4. Display Info" << endl;
            cin >> choice;
            if(choice == 1){
                algo = true;
                hero.attack(enemy);
                cout << "enemy hp: " << enemy.hp << endl;
            }
            else if(choice == 2){
                algo = true;
                hero.heal();
            }
            else if(choice == 3){
                algo = false;
                if(hero.spd > enemy.spd){
                    cout << "you have successfully ran away!" << endl;
                    break;
            }
                else{
                    cout << "you failed to run away!" << endl;
                
            }  
        }
        else if(choice ==4){
            algo = false;
                hero.displayInfo();
        }
        else{
            cout << "invalid input, try again" << endl;
            continue;
        } 
        if(enemy.hp <= 0){
            cout << "you have defeated the " << enemy.name << "!" << endl;
            something++;
            if(something == enemies.size()){
                    cout << "you have cleared the level!" << endl;
                    cout << "the enemy dropped some loot!" << endl;
                    loot.giveLoot(hero);
                }
            break;
        }
                if(algo&& enemy.hp > 0){
                    enemy.attack(hero);
                    cout << "your hp: " << hero.hp << endl;
                }
                
                if(hero.hp <= 0){
                cout << "you have been defeated, better luck next time" << endl;
            }
                
        }while(enemy.hp > 0 && hero.hp > 0);
    }
    
}
void Game::levelOne() {
    vector<Enemy> enemies;
    enemies.push_back(Enemy("zombie", 5, 5, 30));
    enemies.push_back(Enemy("skeleton", 2, 10, 50));
    combat(enemies);
}
void Game::levelTwo(){
    vector<Enemy> enemies;
    enemies.push_back(Enemy("living armor", 15, 5, 80));
    enemies.push_back(Enemy("living canon", 20, 1, 150));
    combat(enemies);
}
void Game::levelThree(){
    vector<Enemy> enemies;
    enemies.push_back(Enemy("Timmy_Tuff_Knuckles", 30, 20, 300));
    combat(enemies);
}
void Game::Run() {
    hero.nameing();
    levelOne();
    if(hero.hp > 0){
        levelTwo();
    }
    if(hero.hp > 0){
        levelThree();
    }
}