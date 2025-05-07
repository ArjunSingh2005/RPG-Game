#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
#include <cstdlib> 

class Item {
protected:
    std::string name;
    std::string description;

public:
    Item(std::string itemName, std::string itemDescription) : name(itemName), description(itemDescription) 
    {}

    std::string getName() const { 
        return name; 
    }
    std::string getDescription() { 
        return description; 
    }
    std::string getType() const {
        return "Unknown";
    }

    void setName(std::string newName) { 
        name = newName; 
    }
    void setDescription(std::string newDescription) { 
        description = newDescription; 
    }

    void use();
};

class Weapon : public Item {
public:
    Weapon(std::string itemName, std::string itemDescription) : Item(itemName, itemDescription) {}
    void use();
};

class Armor : public Item {
public:
    Armor(std::string itemName, std::string itemDescription) : Item(itemName, itemDescription) {}
    void use();
};

class Consumable : public Item {
public:
    Consumable(std::string itemName, std::string itemDescription) : Item(itemName, itemDescription) {}
    void use();
};

class MysteryElixir : public Item {
public:
    MysteryElixir() : Item("Mystery Elixir", "An elixir with unknown effects") {}
    void use();
};

class CursedElixir : public Item {
public:
    CursedElixir() : Item("Cursed Elixir", "A dark potion that weakens you") {}
    void use();
};

class InfernalStrengthPotion : public Item {
public:
    InfernalStrengthPotion() : Item("Infernal Strength Potion", "Grants a temporary attack boost") {}
    void use();
};

class Treasure : public Item {
public:
    Treasure(std::string itemName, std::string itemDescription) : Item(itemName, itemDescription) {}
    void use();
};

#endif 