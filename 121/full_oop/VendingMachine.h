#ifndef VENDING_MACHINE_H
#define VENDING_MACHINE_H

#include <iostream>
#include <string>
#include <map>

/**
 * @class Snack
 * @brief A simple class representing an item to be sold. Provided for you.
 */
class Snack {
public:
    std::string name;
    double price;

    Snack(std::string n = "Empty", double p = 0.0) : name(n), price(p) {}
};

/**
 * @class StockSlot
 * @brief A template class representing a single slot in the inventory.
 * A slot holds an item of type T and its current quantity. This is composition.
 */
template <typename T>
class StockSlot {
public:
    T item;
    int quantity;

    // Constructor to initialize the item and its quantity.
    StockSlot(T anItem, int qty) : item(anItem), quantity(qty) {}
};

/**
 * @class VendingMachine
 * @brief Represents a vending machine.
 * Your task is to implement the methods of this class in VendingMachine.cpp.
 */
class VendingMachine {
private:
    std::string location_;
    // The inventory uses a map to associate a slot code (e.g., "A1")
    // with a StockSlot containing a Snack and its quantity.
    std::map<std::string, StockSlot<Snack>> inventory_;

public:
    // Constructor
    VendingMachine(const std::string& location);

    // Adds a brand new item and slot to the machine.
    void addItem(const std::string& slotCode, const Snack& snack, int quantity);

    // Adds more quantity to an already existing item slot.
    void restock(const std::string& slotCode, int additionalQuantity);

    // Handles the logic for a customer buying an item.
    // Takes money by reference to provide change.
    // Returns true on success, false on failure.
    bool purchase(const std::string& slotCode, double& money);

    // Displays the current items, prices, and quantities.
    void displayItems() const;
};

#endif // VENDING_MACHINE_H
