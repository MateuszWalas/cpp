#include <iostream>
#include <string>
#include "effect.h"

using namespace std;

Effect::Effect(string name, int value_int, int value_int_cap, float value_float){
    this->_NAME = name;    
    this->_VALUE_INT = value_int;
    this->_VALUE_INT_CAP = value_int_cap;
    this->_VALUE_FLOAT = value_float;
};
int Effect::value_int(){
    return this->_VALUE_INT;
};
int Effect::value_int_cap(){
    return this->_VALUE_INT_CAP;
};
float Effect::value_float(){
    return this->_VALUE_FLOAT;
};
string Effect::name(){
    return this->_NAME;
};
