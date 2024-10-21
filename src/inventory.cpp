// src/inventory.cpp
#include "inventory.h"
#include <iostream>

void Inventory::addItem(const std::string& itemName, int quantity) {
    items[itemName] += quantity;
}

void Inventory::removeItem(const std::string& itemName, int quantity) {
    if (items.find(itemName) != items.end() && items[itemName] > quantity) {
        items[itemName] -= quantity;
    } else {
        std::cout << "Error: Insufficient quantity or item not found!" << std::endl;
    }
}

void Inventory::displayItems() const {
    for (const auto& item : items) {
        std::cout << item.first << ": " << item.second << std::endl;
    }
}
