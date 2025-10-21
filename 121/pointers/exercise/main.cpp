#include <iostream>
#include <string>
#include <cassert>

// A struct to hold player stats.
// (You don't need to change this)
struct Player {
    std::string name;
    int health;
};

/**
 * @brief Prints the value of the score using the pointer.
 * @param scorePtr A pointer that holds the memory address of a score variable.
 * @hint Use the dereference operator (*).
 */
void printScore(int* scorePtr) {
    std::cout << "--- Printing Score ---" << std::endl;
    
    // TODO: Dereference 'scorePtr' to print the *value* it points to.
    // Should print "Score is: 1000"
    std::cout << "Score is: " << 0 /* <-- Fix this */ << std::endl;
    
    std::cout << "----------------------" << std::endl;
}

/**
 * @brief Prints the player's name and health using the pointer.
 * @param playerPtr A pointer that holds the memory address of a Player struct.
 * @hint Use the arrow '->' operator as a shorthand.
 */
void printPlayerStats(Player* playerPtr) {
    std::cout << "--- Player Stats ---" << std::endl;

    // TODO: 1. Use the '->' operator to get the 'name' from 'playerPtr' and print it.
    std::cout << "Name: " << "TODO" /* <-- Fix this */ << std::endl;
    
    // TODO: 2. Use the '->' operator to get the 'health' from 'playerPtr' and print it.
    std::cout << "Health: " << 0 /* <-- Fix this */ << std::endl;
    
    std::cout << "--------------------" << std::endl;
}

/**
 * @brief Swaps the *values* pointed to by two pointers.
 * @param ptrA A pointer to the first integer.
 * @param ptrB A pointer to the second integer.
 * @hint You'll need to dereference *both* pointers to get their values
 * and assign new values to them.
 */
void swapValues(int* ptrA, int* ptrB) {
    // TODO:
    // 1. Create a temporary 'int' variable to hold the value *at* ptrA.
    // 2. Set the value *at* ptrA to be the value *at* ptrB.
    // 3. Set the value *at* ptrB to be the value from your temporary variable.
}


// --- Test Harness ---
// DO NOT MODIFY THE MAIN FUNCTION.
int main() {
    // 1. Declare our local variables
    int score = 1000;
    int bonusA = 50;
    int bonusB = 250;
    Player tuffy = {"Tuffy", 100};

    std::cout << "--- Test 1: printScore ---" << std::endl;
    printScore(&score);
    assert(score == 1000); // make sure the function didn't change it

    std::cout << "\n--- Test 2: printPlayerStats ---" << std::endl;
    // We pass the *address of* tuffy
    printPlayerStats(&tuffy);
    assert(tuffy.health == 100); // make sure the function didn't change it

    std::cout << "\n--- Test 3: swapValues ---" << std::endl;
    std::cout << "Before swap: A=" << bonusA << ", B=" << bonusB << std::endl;
    // We pass the addresses of both variables
    swapValues(&bonusA, &bonusB);
    std::cout << "After swap: A=" << bonusA << ", B=" << bonusB << std::endl;
    
    // Test that the swap actually worked
    assert(bonusA == 250);
    assert(bonusB == 50);


    std::cout << "\n\n************************" << std::endl;
    std::cout << "  All tests passed! 🎯 " << std::endl;
    std::cout << "************************" << std::endl;

    return 0;
}
