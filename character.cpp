#include <iostream>
#include <string>
#include "character.h"

using namespace std;

Character::Character(string nickname){
    this->_NICKNAME = nickname;
    this->_HP = 10;
    this->_HP_MAX = 10;
    this->_MANA = 10;
    this->_MANA_MAX = 10;
    this->_DEFENCE = 1;
    this->_DEFENCE_MAX = 1;
    this->_POWER = 3;
    this->_POWER_MAX = 3;
};
void Character::hello(){
    cout << "Hello, I'm " << this->_NICKNAME << "." << endl;
};
void Character::attack(Character* player){
    int damage = this->_POWER - player->_DEFENCE;
    if(damage < 0){
        damage = 0;
    }
    player->_HP -= damage;
    cout << this->_NICKNAME << " dealth " << damage << " damage to " << player->_NICKNAME << "." << endl;
    if(player->_HP <= 0){
        player->_HP = 0;
        cout << player->_NICKNAME << " was killed." << endl;
    }
};

