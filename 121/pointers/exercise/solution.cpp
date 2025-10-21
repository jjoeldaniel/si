#include <iostream>
#include <string>
#include <cassert> 

// Player struct (same as above)
struct Player {
    std::string name;
    int health;
};

void printScore(int* scorePtr) {
    std::cout << "--- Printing Score ---" << std::endl;
    
    // SOLUTION: Use * to dereference the pointer and get the value
    std::cout << "Score is: " << *scorePtr << std::endl;
    
    std::cout << "----------------------" << std::endl;
}

void printPlayerStats(Player* playerPtr) {
    std::cout << "--- Player Stats ---" << std::endl;

    // SOLUTION: Use -> to access members from a struct pointer
    std::cout << "Name: " << playerPtr->name << std::endl;
    std::cout << "Health: " << playerPtr->health << std::endl;
    
    std::cout << "--------------------" << std::endl;
}

void swapValues(int* ptrA, int* ptrB) {
    // 1. Get the value *at* ptrA
    int temp = *ptrA;
    
    // 2. Set the value *at* ptrA to the value *at* ptrB
    *ptrA = *ptrB;
    
    // 3. Set the value *at* ptrB to the original value from step 1
    *ptrB = temp;
}

// --- Test Harness ---
// (Identical to the student version)
int main() {
    int score = 1000;
    int bonusA = 50;
    int bonusB = 250;
    Player tuffy = {"Tuffy", 100};

    std::cout << "--- Test 1: printScore ---" << std::endl;
    printScore(&score);
    assert(score == 1000); 

    std::cout << "\n--- Test 2: printPlayerStats ---" << std::endl;
    printPlayerStats(&tuffy);
    assert(tuffy.health == 100);

    std::cout << "\n--- Test 3: swapValues ---" << std::endl;
    std::cout << "Before swap: A=" << bonusA << ", B=" << bonusB << std::endl;
    swapValues(&bonusA, &bonusB);
    std::cout << "After swap: A=" << bonusA << ", B=" << bonusB << std::endl;
    
    assert(bonusA == 250);
    assert(bonusB == 50);


    std::cout << "\n\n************************" << std::endl;
    std::cout << "  All tests passed! 🎯 " << std::endl;
    std::cout << "************************" << std::endl;

    return 0;
}
