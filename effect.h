#ifndef EFFECT_H
#define EFFECT_H

#include <string>

using namespace std;
class Skill;
class Effect {
    friend class Skill;
    private:
         
        string _NAME;
    public:
        Effect(string = "Effect not specified");
};

#endif
