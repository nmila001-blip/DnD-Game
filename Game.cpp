#include <iostream>
#include "Game.h"
#include "Hero.h"
#include "loot.h"
#include "Enemy.h"
#include <vector>
using namespace std;

Hero hero;
void Game::combat(std::vector<Enemy> &enemies) {
    for(Enemy& enemy : enemies) {
        cout << "A " << enemy.name << " appears!" << endl;
        do{
            int choice;
            cout << "Would you like to: " << endl;
            cout << "1. Attack" << endl;
            cout << "2. Heal" << endl;
            cout << "3. run away" <<endl;
            cout << "4. Display Info" << endl;
            cin >> choice;
            if(choice == 1){
                hero.attack(enemy);
                cout << "enemy hp: " << enemy.hp << endl;
            }
            else if(choice == 2){
                hero.heal();
            }
            else if(choice == 3){
                if(hero.spd > enemy.spd){
                    cout << "you have successfully ran away!" << endl;
                    break;
            }
                else{
                    cout << "you failed to run away!" << endl;
                
            }  
        }
        else if(choice ==4){
                hero.displayInfo();
        }
        else{
            cout << "invalid input, try again" << endl;
            continue;
        } 
                if(enemy.hp > 0&&choice ==1||choice == 2){
                    enemy.attack(hero);
                    cout << "your hp: " << hero.hp << endl;
                }
                if(hero.hp <= 0){
                cout << "you have been defeated, better luck next time" << endl;
            }
                if(enemy.hp <= 0){
                    cout << "you have defeated the " << enemy.name << "!" << endl;
                    
                    something++;
                }
                if(something == enemies.size()){
                    cout << "you have cleared the level!" << endl;
                    cout << "the enemy dropped some loot!" << endl;
                    cout << something;
                    Loot loot;
                    loot.giveLoot(hero);
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