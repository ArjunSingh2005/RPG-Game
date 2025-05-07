#include "../header/Characters.h"

std::string Characters::getName() const {
    return this->name;
}

int Characters::getHP() const {
    return HP;
}

void Characters::setHP(int amount) {
    this->HP = amount;
}

int Characters::getMaxHP() const {
    return MaxHP;
}

void Characters::setMaxHP(int MaxHP) {
    this->MaxHP = MaxHP;
}
