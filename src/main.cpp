// src/main.cpp
#include <iostream>
#include "inventory.h"

int main() {
    Inventory inventory;

    inventory.addItem("Horse Saddle", 5);
    inventory.addItem("Horse Bridle", 3);
    inventory.addItem("Horse Feed Bag", 10);

    std::cout << "Current Inventory:" << std::endl;
    inventory.displayItems();

    inventory.removeItem("Horse Saddle", 1);
    std::cout << "\nAfter removing one Horse Saddle:" << std::endl;
    inventory.displayItems();

    // New feature: Get the quantity of a specific item
    std::string itemToSearch = "Horse Feed Bag";
    int quantity = inventory.getItemQuantity(itemToSearch);
    std::cout << "\nQuantity of " << itemToSearch << ": " << quantity << std::endl;

    return 0;
}
