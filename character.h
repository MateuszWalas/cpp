#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <vector>
#include "skill.h"

using namespace std;

class Character {
    protected:
        int _HP, _HP_MAX;
        int _MANA, _MANA_MAX;
        int _POWER, _POWER_MAX;
        int _DEFENCE, _DEFENCE_MAX;
        string _NICKNAME;
        vector<Skill*> _SKILLBOOK;
    public:
        Character(string = "Someone");
        void attack(Character*);
        void learn(Skill*);
        void useSkill(string, Character* = nullptr);
};

#endif
