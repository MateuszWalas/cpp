#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
//#include "skill.h"

using namespace std;

class Character {
    protected:
        int _HP, _HP_MAX;
        int _MANA, _MANA_MAX;
        int _POWER, _POWER_MAX;
        int _DEFENCE, _DEFENCE_MAX;
        string _NICKNAME;
        //Skill* _SKILLBOOK[];
    public:
        Character(string = "Someone");
        virtual void hello() = 0;
        void attack(Character*);
};

#endif
