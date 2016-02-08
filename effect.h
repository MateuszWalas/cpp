#ifndef EFFECT_H
#define EFFECT_H

#include <string>

using namespace std;
class Skill;
class Effect {
    friend class Skill;
    private:
        int _VALUE_INT;
        int _VALUE_INT_CAP;
        float _VALUE_FLOAT;
        string _NAME;
    public:
        Effect(string = "Effect not specified", int = 1, int = 10, float = 0.0);
        int value_int();
        int value_int_cap();
        float value_float();
        
        string name();
};

#endif
