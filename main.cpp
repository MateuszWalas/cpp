#include <iostream>
#include "character.h"
#include "mage.h"

using namespace std;

int main(){
    void (Character::*hi)() = &Character::hello;
    //method hi = &Character::hello;
    Mage* player = new Mage;
    
    // both work.
    //(player->*hi)();
    player->hello();
    
    player->attack(player);
    player->attack(player);
    player->attack(player);
    player->attack(player);
    player->attack(player);
    return 0;
}
