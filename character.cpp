#include <iostream>
#include <string>
#include "character.h"

using namespace std;

Character::Character(string nickname){
    this->_NICKNAME = nickname;
};
void Character::learn(Skill* skill){
   this->_SKILLBOOK.push_back(skill);
   cout << this->_NICKNAME << " just learned new skill: " << skill->_NAME << endl;
};
void Character::useSkill(string skillName, Character* target){
    // find given skill if learned
    int i = 0;
    int z = this->_SKILLBOOK.size();
    Skill* skill = nullptr;
    while(i != z){
        if(this->_SKILLBOOK[i]->getName() == skillName){
            skill = this->_SKILLBOOK[i];
            break;
        }
        ++i;
    }
    if(skill == nullptr){
        cout << this->_NICKNAME << " doesn't know [" << skillName << "]" << endl;
        return;
    }
    /*
     * Use skill on target, for now just deal damage.
     * */
    if(this->_MANA < skill->_MANA_REQUIRED){
        cout << this->_NICKNAME << " doesn't have enough mana to use [" << skill->_NAME << "]" << endl;
        return;
    }
    cout << this->_NICKNAME << " casts " << skillName << " -> " << target->_NICKNAME << endl;
    this->_MANA -= skill->_MANA;
    /*
     * Loop through effects of given skill and execute them on target
     * */
    
    int damage;
    Effect* effect;

    i = 0;
    z = skill->_EFFECTS.size();
    while(i != z){
        effect = skill->_EFFECTS[i];
        damage = static_cast<int>(this->_POWER * effect->value_float()) + effect->value_int();
        if(target->_DEFENCE > 0){
            damage -= target->_DEFENCE;
        }
        if(damage < 0){
            damage = 0;
        }
        if(damage > effect->value_int_cap()){
            damage = effect->value_int_cap();
        }
        target->_HP -= damage;
        cout << target->_NICKNAME << " received " << damage << " damage "
             << " | " << target->_HP << "/" << target->_HP_MAX << " - " << static_cast<int>(100.0 * (static_cast<double>(target->_HP) / static_cast<double>(target->_HP_MAX))) << "% HP left"
             << endl;
        ++i;
    }
    if(target->_HP <= 0){
        target->_HP = 0;
        cout << target->_NICKNAME << " was killed." << endl;
    }
};
