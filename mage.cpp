#include <iostream>
#include <string>
#include "character.h"
#include "mage.h"

using namespace std;

Mage::Mage(string nick): Character(nick){
    _HP = 10;
    _HP_MAX = 10;
    this->_MANA = 10;
    this->_MANA_MAX = 10;
    this->_DEFENCE = 1;
    this->_DEFENCE_MAX = 1;
    this->_POWER = 3;
    this->_POWER_MAX = 3;
}
