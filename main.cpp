#include <iostream>
#include "mage.h"
#include "skill.h"

using namespace std;

int main(void){
    void (Character::*hi)() = &Character::hello;
    Mage* player = new Mage;
    
    // both work.
    //(player->*hi)();
    player->hello();
    
    Effect* effect;
    Skill* skill = new Skill("Magic Missile", "Kamehameha!", 1, 0, 1, 1);
    
    skill->addEffect(new Effect("Obrazenia"));
    skill->showEffects();
    player->attack(player);
    player->attack(player);
    player->attack(player);
    player->attack(player);
    player->attack(player);
}
