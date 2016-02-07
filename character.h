#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

using namespace std;

class Character {
	private:
		int _HP, _HP_MAX;
	    string _NICKNAME;
    public:
		Character(int hp = 10, int hp_max = 10, string = "Player");
        
        int hp();
        int hp_max();
        void hello();

};

#endif
