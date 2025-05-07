#include "../header/Item.h"

void Item::use() {
    std::cout << "Using item: " << name << std::endl;
}

void Weapon::use() {
    std::cout << "You equipped the weapon: " << name << "!" << std::endl;
}

void Armor::use() {
    std::cout << "You equipped the armor: " << name << "!" << std::endl;
}

void Consumable::use() {
    std::cout << "You consumed: " << name << "!" << std::endl;
}

void MysteryElixir::use() {
    int effect = rand() % 2; 
    if (effect == 0) {
        std::cout << "The Mystery Elixir heals you!" << std::endl;
    } else {
        std::cout << "The Mystery Elixir harms you!" << std::endl;
    }
}

void CursedElixir::use() {
    std::cout << "You drank the Cursed Elixir! You feel weaker!" << std::endl;
}

void InfernalStrengthPotion::use() {
    std::cout << "You feel a surge of power! Your attacks are stronger!" << std::endl;
}

void Treasure::use() {
    std::cout << "You found treasure: " << name << "!" << std::endl;
}
