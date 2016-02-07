#include <iostream>
#include <string>
#include "character.h"

using namespace std;

Character::Character(int hp, int hp_max, string nickname){
    this->_HP = hp;
    this->_HP_MAX = hp_max;
    this->_NICKNAME = nickname;
};
int Character::hp(){
    return this->_HP;
}
int Character::hp_max(){
    return this->_HP_MAX;
}

void Character::hello(){
    cout << "Hello, I'm " << this->_NICKNAME << "." << endl;
};
