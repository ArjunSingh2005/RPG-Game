#include "../header/Player.h"
#include "../header/NPC.h"
#include "../header/Characters.h"

#include <iostream>

using namespace std;

int Player::getLevel() {
    return this->level;
} 

void Player::displayStatus() {
    cout << "Player Status:\n";
    cout << "   Name: " << getName() << endl;
    cout << "   Level: " << getLevel() << endl;
    cout << "   HP: " << getHP() << endl;
    cout << "   MaxHP: " << getMaxHP() << endl;
}

void Player::upgrade() {
    ++level;
}

void Player::heal(int amount) {
    if(amount + getHP() <= getMaxHP()) {
        setHP(amount + getHP());
    }
    else {
        setHP(getMaxHP());
    }
}

void Player::attack(NPC& enemy, int damage) {
    enemy.damage(damage);
}

void Player::damage(int damage) {
    if(getHP() - damage > 0){
        setHP(getHP() - damage);
    }
    else {
        setHP(0);
    }
}
