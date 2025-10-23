#include <iostream>
#include <cassert> // For testing
#include "inventory.cpp"

int main() {
    std::cout << "--- Test 1: Constructor (Establish Invariant) ---" << std::endl;
    
    // Test 1a: A normal capacity
    Inventory inv1(10);
    assert(inv1.getCapacity() == 10);
    assert(inv1.getItems() == 0);
    std::cout << "Test 1a passed." << std::endl;

    // Test 1b: An invalid (negative) capacity.
    // The constructor must ENFORCE the invariant (capacity >= 1).
    Inventory inv2(-5);
    assert(inv2.getCapacity() == 1);
    assert(inv2.getItems() == 0);
    std::cout << "Test 1b passed." << std::endl;

    // Test 1c: An invalid (zero) capacity.
    Inventory inv3(0);
    assert(inv3.getCapacity() == 1);
    assert(inv3.getItems() == 0);
    std::cout << "Test 1c passed." << std::endl;


    std::cout << "\n--- Test 2: addItems (Preserve Invariant) ---" << std::endl;
    Inventory playerInv(20); // New inventory with capacity 20

    // Test 2a: Add a valid amount
    playerInv.addItems(5);
    assert(playerInv.getItems() == 5);
    std::cout << "Test 2a passed." << std::endl;

    // Test 2b: Try to add a negative amount (must be ignored)
    playerInv.addItems(-3);
    assert(playerInv.getItems() == 5); // Should not have changed
    std::cout << "Test 2b passed." << std::endl;

    // Test 2c: Try to add *too many* items (must fill to capacity)
    playerInv.addItems(100);
    assert(playerInv.getItems() == 20); // Should be capped at 20
    assert(playerInv.isFull() == true);
    std::cout << "Test 2c passed." << std::endl;
    
    // Test 2d: Try to add items when full (must be ignored)
    playerInv.addItems(1);
    assert(playerInv.getItems() == 20);
    std::cout << "Test 2d passed." << std::endl;


    std::cout << "\n--- Test 3: removeItems (Preserve Invariant) ---" << std::endl;
    // We'll keep using 'playerInv', which is full (20/20 items)

    // Test 3a: Remove a valid amount
    playerInv.removeItems(8);
    assert(playerInv.getItems() == 12);
    std::cout << "Test 3a passed." << std::endl;

    // Test 3b: Try to remove a negative amount (must be ignored)
    playerInv.removeItems(-4);
    assert(playerInv.getItems() == 12); // Should not have changed
    std::cout << "Test 3b passed." << std::endl;

    // Test 3c: Try to remove *too many* items (must empty to 0)
    playerInv.removeItems(500);
    assert(playerInv.getItems() == 0); // Should be floored at 0
    std::cout << "Test 3c passed." << std::endl;

    // Test 3d: Try to remove items when empty (must be ignored)
    playerInv.removeItems(1);
    assert(playerInv.getItems() == 0);
    std::cout << "Test 3d passed." << std::endl;


    std::cout << "\n\n************************" << std::endl;
    std::cout << "  All tests passed! 🎒 " << std::endl;
    std::cout << "************************" << std::endl;

    return 0;
}
