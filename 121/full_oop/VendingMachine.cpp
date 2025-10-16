#include "VendingMachine.h"

// TODO: PROBLEM 1 - The Constructor
// Use a member initializer list to set the `location_` of the vending machine.
VendingMachine::VendingMachine(const std::string& location)
    /* initializer list goes here */ {
    // The constructor body can be empty.
    std::cout << "Vending machine installed at: " << location_ << std::endl;
}


// TODO: PROBLEM 2 - Adding a New Item
// This function should add a new slot to the inventory.
// 1. Create a `StockSlot<Snack>` object using the `snack` and `quantity` parameters.
// 2. Insert this new object into the `inventory_` map with `slotCode` as the key.
//    Hint: `inventory_[slotCode] = newStockSlotObject;` is a clean way to do it.
void VendingMachine::addItem(const std::string& slotCode, const Snack& snack, int quantity) {
    // implementation goes here
}


// TODO: PROBLEM 3 - Restocking an Existing Item
// This function adds more items to an existing slot.
// 1. Find the slot in the `inventory_` map using its `slotCode`.
//    Hint: Use `inventory_.find(slotCode)` to check if the item exists.
// 2. If the slot exists, add `additionalQuantity` to its current quantity.
// 3. If the slot does NOT exist, print an error message.
void VendingMachine::restock(const std::string& slotCode, int additionalQuantity) {
    // implementation goes here
}


// TODO: PROBLEM 4 - Handling a Purchase
// This is the most complex method. It must handle several conditions.
// The function should return `false` if the purchase cannot be completed.
// 1. Check if the item exists in the inventory. If not, print an error and return false.
// 2. If it exists, check if the `quantity` is greater than 0. If out of stock, print error and return false.
// 3. Check if the provided `money` is enough to buy the snack. If not, print error and return false.
// 4. If all checks pass, it's a successful purchase!
//    a. Decrement the item's quantity by 1.
//    b. Calculate the change and update the `money` variable with the change amount.
//       (e.g., if price is $1.50 and money is $2.00, money should be $0.50 after).
//    c. Print a success message.
//    d. Return `true`.
bool VendingMachine::purchase(const std::string& slotCode, double& money) {
    // implementation goes here
}


// TODO: PROBLEM 5 - Displaying the Inventory
// This function should print out all the items in the vending machine.
// 1. Iterate through the `inventory_` map. A range-based for loop is great for this.
//    `for (const auto& pair : inventory_)`
// 2. For each `pair` in the map, the `pair.first` is the slot code (string) and
//    `pair.second` is the `StockSlot<Snack>` object.
// 3. Print the slot code, snack name, price, and quantity for each item.
void VendingMachine::displayItems() const {
    std::cout << "\n----- Vending Machine Inventory -----" << std::endl;
    std::cout << "Location: " << location_ << std::endl;
    // implementation goes here
    std::cout << "-----------------------------------" << std::endl;
}
