#include <iostream>
#include "character.h"

using namespace std;

int main(void){
    Character* player = new Character(25, 25, "Mateusz");    
    //cout << "Player.hp: " << player->hp() << endl;
    player->hello();
}
