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
        // Rule 3: If 'capacity' is less than 1, you should
        //         force 'capacity_' to be 1.
        // Rule 1 & 2: Initialize 'itemsHeld_' to a value
        //             that is valid (e.g., 0).

        // --- Placeholder Code ---
        capacity_ = capacity;
        itemsHeld_ = 0;
        // --- End Placeholder ---
    }

    /**
     * @brief Adds items to the inventory, preserving the invariant.
     * @param count The number of items to add.
     */
    void addItems(int count) {
        // TODO: Preserve the invariant.
        // 1. You cannot add a negative number of items (violates Rule 1).
        //    If 'count' is negative, do nothing.
        // 2. You cannot add more items than the capacity (violates Rule 2).
        //    If adding 'count' would go over capacity, only add
        //    as many as you can to fill the inventory exactly.

        // --- Placeholder Code ---
        itemsHeld_ += count;
        // --- End Placeholder ---
    }

    /**
     * @brief Removes items from the inventory, preserving the invariant.
     * @param count The number of items to remove.
     */
    void removeItems(int count) {
        // TODO: Preserve the invariant.
        // 1. You cannot remove a negative number of items.
        //    If 'count' is negative, do nothing.
        // 2. You cannot remove more items than you have (violates Rule 1).
        //    If removing 'count' would go below 0, only remove
        //    as many as you have (setting 'itemsHeld_' to 0).

        // --- Placeholder Code ---
        itemsHeld_ -= count;
        // --- End Placeholder ---
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
