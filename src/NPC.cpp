#include "../header/NPC.h"
#include "../header/Player.h"
#include "../header/Characters.h"

#include <iostream>
using namespace std;

void NPC::attack(Player& player, int damage) {
    player.damage(damage);
}

void NPC::damage(int damage) {
    if(getHP() - damage > 0){
        setHP(getHP() - damage);
    }
    else {
        setHP(0);
    }
}

void NPC::displayStatus() {
    cout << "Enemy Status:\n";
    cout << "   Name: " << getName() << endl;
    cout << "   HP: " << getHP() << endl;
    cout << "   MaxHP: " << getMaxHP() << endl;
}