#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

using namespace std;

class Character {
	private:
		int _HP, _HP_MAX;
	    int _MANA, _MANA_MAX;
        int _POWER, _POWER_MAX;
        int _DEFENCE, _DEFENCE_MAX;
        string _NICKNAME;
        
    public:
		Character(string = "Someone");
        
        void hello();
        void attack(Character* player);

};

#endif
