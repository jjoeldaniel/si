#include "character.h"
#include <iostream>

// HINT: To implement a class's member function, you must use the class name
// followed by the scope resolution operator (::).
// For example: void Character::MyFunction() { /* code here */ }

// TODO 1: Implement the Constructor.
// It receives a name, health, and attack power to initialize the member
// variables.
Character::Character(const std::string &name, int health, int attack_power) {
  // TODO 1a: Assign the 'name' parameter to the 'name_' member variable.

  // TODO 1b: Assign the 'health' parameter to the 'health_' member variable.

  // TODO 1c: Assign the 'attack_power' parameter to the 'attack_power_' member
  // variable.
}

// TODO 2: Implement the TakeDamage function.
// This function modifies the Character's state, so it is NOT marked 'const'.
void Character::TakeDamage(int damage) {
  // TODO 2a: Subtract the incoming 'damage' from the 'health_' member variable.

  // TODO 2b: Add a guard clause. A Character's health should not drop below 0.
  // If health_ is less than 0, set it back to 0.
}

// TODO 3: Implement the DisplayStats function.
// This function only reads data, so it MUST be marked 'const'.
void Character::DisplayStats() const {
  // TODO 3a: Use std::cout to print the character's name, health, and
  // attack power in a readable format.
  // Example:
  // Name: Tuffy, Health: 100, Attack: 20
}

// TODO 4: Implement the Getters.
// These are simple, one-line 'const' functions that just return a value.
std::string Character::GetName() const {
  // TODO 4a: Return the name_ member variable.
  return "";
}

int Character::GetHealth() const {
  // TODO 4b: Return the health_ member variable.
  return 0;
}

int Character::GetAttackPower() const {
  // TODO 4c: Return the attack_power_ member variable.
  return 0;
}
