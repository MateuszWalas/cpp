#include <iostream>
#include "character.h"

using namespace std;

int main(void){
    Character* player = new Character("Player 1");    
    player->hello();
    player->attack(player);
    player->attack(player);
    player->attack(player);
    player->attack(player);
    player->attack(player);
}
