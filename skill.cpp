#include <iostream>
#include <string>
#include "skill.h"

using namespace std;

Skill::Skill(string name, string words, int lvl, int hp, int mana, int mana_required){
    this->_NAME = name;
    this->_WORDS = words;
    this->_LVL = lvl;
    this->_HP = hp;
    this->_MANA = mana;
    this->_MANA_REQUIRED = mana_required;
};

void Skill::addEffect(Effect* effect){
    this->_EFFECTS.push_back(effect);    
};
void Skill::showEffects(){
    int i = 0;
    int z = this->_EFFECTS.size();
    while(i != z){
        cout << "Skill " << this->_NAME << ": effect [" << this->_EFFECTS[i]->_NAME << "]" << endl;
        ++i;
    }
};
string Skill::getName(){
    return this->_NAME;
};
