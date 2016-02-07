#include <iostream>
#include "character.h"
#include "mage.h"

using namespace std;

typedef void (Character::*method)();

int main(void){
    method hi = &Character::hello;
    Mage* player = new Mage;
    
    // both work.
    (player->*hi)();
    player->hello();
    
    player->attack(player);
    player->attack(player);
    player->attack(player);
    player->attack(player);
    player->attack(player);
}
