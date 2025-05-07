#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include <string>
#include "Item.h"  // Assuming you have an Item class defined in item.h

class Inventory {
private:
    std::vector<Item> items; // Stores a list of items

public:
    // Constructor
    Inventory();

    // Adds an item to the inventory
    void addItem(const Item& item);

    // Displays all items in the inventory
    void displayInventory() const;
};

#endif // INVENTORY_H
