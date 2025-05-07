#include "../header/Inventory.h"  
#include <iostream>

using namespace std;

// Constructor
Inventory::Inventory() {}

// Adds an item to the inventory
void Inventory::addItem(const Item& item) {
    items.push_back(item);
    cout << "Added item: " << item.getName() << " (Type: " << item.getType() << ")" << endl;
}

// Displays all items in the inventory
void Inventory::displayInventory() const {
    if (items.empty()) {
        cout << "Inventory is empty." << endl;
        return;
    }

    cout << "Inventory Items:" << endl;
    for (const auto& item : items) {
        cout << "- " << item.getName() << " (Type: " << item.getType() << ")" << endl;
    }
}
