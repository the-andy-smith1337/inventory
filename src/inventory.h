// src/inventory.h
#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <map>

class Inventory {
public:
    void addItem(const std::string& itemName, int quantity);
    void removeItem(const std::string& itemName, int quantity);
    void displayItems() const;

private:
    std::map<std::string, int> items;
};

#endif
