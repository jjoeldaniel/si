#include <iostream>
#include <string>

/**
 * @class Inventory
 * Represents a player's inventory with a fixed capacity.
 *
 * @invariant The number of items held must always be valid.
 * Rule 1: 0 <= itemsHeld_
 * Rule 2: itemsHeld_ <= capacity_
 * Rule 3: 1 <= capacity_ (An inventory must hold at least 1 item)
 */
class Inventory {
private:
    int itemsHeld_;
    int capacity_;

public:
    /**
     * @brief Constructor: Establishes the class invariant.
     * The capacity must be at least 1.
     * The items held should start at 0.
     */
    Inventory(int capacity) {
        // TODO: Establish the invariant.
        
        // Rule 3: If 'capacity' is less than 1, force 'capacity_' to be 1.
        if (capacity < 1) {
            capacity_ = 1;
        } else {
            capacity_ = capacity;
        }
        
        // Rule 1 & 2: Initialize 'itemsHeld_' to a valid value (0).
        itemsHeld_ = 0;
    }

    /**
     * @brief Adds items to the inventory, preserving the invariant.
     * @param count The number of items to add.
     */
    void addItems(int count) {
        // TODO: Preserve the invariant.

        // 1. You cannot add a negative number of items.
        if (count <= 0) {
            return; // Do nothing
        }

        // 2. You cannot add more items than the capacity.
        if (itemsHeld_ + count > capacity_) {
            // If adding would go over, just set to max capacity.
            itemsHeld_ = capacity_;
        } else {
            // Otherwise, it's safe to add.
            itemsHeld_ += count;
        }
    }

    /**
     * @brief Removes items from the inventory, preserving the invariant.
     * @param count The number of items to remove.
     */
    void removeItems(int count) {
        // TODO: Preserve the invariant.
        
        // 1. You cannot remove a negative number of items.
        if (count <= 0) {
            return; // Do nothing
        }

        // 2. You cannot remove more items than you have.
        if (itemsHeld_ - count < 0) {
            // If removing would go below 0, just set to 0.
            itemsHeld_ = 0;
        } else {
            // Otherwise, it's safe to remove.
            itemsHeld_ -= count;
        }
    }

    // --- Getters (Already complete) ---

    int getItems() const {
        return itemsHeld_;
    }

    int getCapacity() const {
        return capacity_;
    }

    bool isFull() const {
        return itemsHeld_ == capacity_;
    }
};
