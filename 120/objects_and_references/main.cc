#include "character.h"
#include <iostream>

// TODO 1: Pass by Value
// This function gets a COPY of the character.
// Any damage done here will NOT affect the original.
void SimulateWeakAttack(Character target) {
  std::cout << target.GetName()
            << " is hit by a weak attack inside the function!\n";
  target.TakeDamage(10);
  std::cout << "Inside function, health is now: " << target.GetHealth()
            << std::endl;
}

// TODO 2: Pass by Reference
// This function gets a DIRECT LINK to the character.
// Damage done here WILL affect the original.
void SimulateStrongAttack(Character &target) {
  // Your code here...
}

// TODO 3: Pass by const Reference
// This function gets a DIRECT LINK but PROMISES not to change anything.
// It's safe and efficient for just reading data.
void AnnounceBattle(const Character &char1, const Character &char2) {
  // Your code here...
  // Try to call char1.TakeDamage(5) and see what the compiler says!
}

int main() {
  Character hero("Tuffy", 100, 20);
  Character villain("Brutus", 120, 15);

  hero.DisplayStats();

  // --- Pass by Value Test ---
  std::cout << "\n--- Testing Pass by Value ---\n";
  SimulateWeakAttack(hero);
  std::cout << "After the weak attack function, Tuffy's health is: "
            << hero.GetHealth() << std::endl;

  // --- Pass by Reference Test ---
  // std::cout << "\n--- Testing Pass by Reference ---\n";
  // Call SimulateStrongAttack with the hero...
  // Check the hero's health again...

  // --- Pass by const Reference Test ---
  // std::cout << "\n--- Testing Pass by const Reference ---\n";
  // Call AnnounceBattle with the hero and villain...

  return 0;
}
