#include "Human.h"
#include <iostream>

int main() {
    std::cout << "--- Step 1: Create initial humans ---\n";
    Human alice("Alice", 30);
    Human bob("Bob", 25);
    
    std::cout << "\n--- Step 2: Test the Copy Constructor ---\n";
    Human alice_clone = alice;
    // Expected: alice_clone has a NEW ID (3).
    std::cout << "Original Alice: " << alice << std::endl;
    std::cout << "Cloned Alice:   " << alice_clone << std::endl;
    
    std::cout << "\n--- Step 3: Test Function Overloading ---\n";
    
    // The compiler knows which function to call based on the arguments provided.
    std::cout << "Calling interact()...\n";
    alice.interact(); // Calls the version with no parameters.
    
    std::cout << "\nCalling interact(Human&)...\n";
    alice.interact(bob); // Calls the version that takes another Human.
    
    std::cout << "\nCalling interact(std::string)...\n";
    alice.interact("wrench"); // Calls the version that takes a string.

    std::cout << "\nCalling interact(std::string, int)...\n";
    alice.interact("C++ is fun", 3); // Calls the version with a string and an int.

    return 0;
}
