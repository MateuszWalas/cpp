#include <iostream>
#include "effect.h"
#include "skill.h"
#include "mage.h"

using namespace std;

int main(void){
    Mage* player = new Mage;
    
    Skill* skill = new Skill("Magic Missiles", "", 1, 0, 1, 1);
    skill->addEffect(new Effect("Missile 1", 7, 15));
    skill->addEffect(new Effect("Missile 2", 8, 15));
    skill->addEffect(new Effect("Missile 3", 4, 15));
    skill->addEffect(new Effect("Missile 4", 11, 15));
    skill->addEffect(new Effect("Missile 5", 9, 15));

    player->learn(skill);
    player->useSkill("Magic Missiles", player);
}
