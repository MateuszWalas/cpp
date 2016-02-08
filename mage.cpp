#include <iostream>
#include <string>
#include "mage.h"

using namespace std;

Mage::Mage(string nick): Character(nick){
    this->_HP = 30;
    this->_HP_MAX = 30;
    this->_MANA = 30;
    this->_MANA_MAX = 30;
    this->_DEFENCE = 3;
    this->_DEFENCE_MAX = 3;
    this->_POWER = 3;
    this->_POWER_MAX = 3;
};
