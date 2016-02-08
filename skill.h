#ifndef SKILL_H
#define SKILL_H

#include <string>
#include <vector>
#include "effect.h"

using namespace std;

class Skill {
    private:
        string _NAME;
        string _WORDS;
        int _LVL;
        int _HP;
        int _MANA, _MANA_REQUIRED;
        vector<Effect*> _EFFECTS;
    public:
        Skill(string = "Skill_name", string = "Skill_words", int = 1, int = 0, int = 1, int = 1);
        void addEffect(Effect*);
        void showEffects();
};

#endif
