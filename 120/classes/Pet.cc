#include "Pet.h"
#include <iostream>

// NOTE: Every time you define a function that belongs to a class, you must
// use the class name and the scope resolution operator (::).
// For example: Pet::MyFunction() { ... }

// TODO 1: Implement the Constructor
// It takes one parameter: a constant string reference named 'name'.
Pet::Pet(const std::string &name) {
  // TODO 1a: Initialize the 'name_' member variable with the 'name' parameter.

  // TODO 1b: Initialize the pet's stats. Give them some reasonable starting
  // values between 0 and 100.
  // For example: hunger_ = 50;
}

// TODO 2: Implement the Feed() member function
void Pet::Feed() {
  // TODO 2a: Print a message to the user, like "You feed <pet_name>. Yum!"

  // TODO 2b: Decrease the 'hunger_' member variable. Feeding should make it
  // less hungry!

  // TODO 2c: Add a guard clause. A pet's hunger should not go below 0.
  // Use an if-statement to check if hunger_ is less than 0, and if it is, set
  // it back to 0.
}

// TODO 3: Implement the Play() member function
void Pet::Play() {
  // TODO 3a: Print a message to the user, like "You play with <pet_name>. Fun!"

  // TODO 3b: Increase the 'happiness_' member variable.

  // TODO 3c: Playing is tiring! It should decrease 'energy_' and maybe increase
  // 'hunger_'.

  // TODO 3d: Add a guard clause. A pet's happiness can't go above 100.
  // Use an if-statement to cap the value at 100.
}

// TODO 4: Implement the Sleep() member function
void Pet::Sleep() {
  // TODO 4a: Print a message to the user that the pet is sleeping.

  // TODO 4b: Sleeping should restore energy. Set 'energy_' back to 100.
}

// TODO 5: Implement the PrintStatus() member function
// Remember, this one is 'const' because it only reads data, it doesn't change
// it.
void Pet::PrintStatus() const {
  // TODO 5a: Use std::cout to display all the pet's stats in a clean,
  // readable format. Include the pet's name.
  // Example:
  // ====== Tuffy's Stats ======
  //  Happiness: 50/100
  //  Hunger:    50/100
  //  Energy:    70/100
  // ===========================
}

// TODO 6: Implement the Getters
// These are simple one-line functions that just return the value of the
// private member variable.
std::string Pet::GetName() const {
  // TODO 6a: Return the name_ member variable.
}

int Pet::GetHunger() const {
  // TODO 6b: Return the hunger_ member variable.
}

int Pet::GetHappiness() const {
  // TODO 6c: Return the happiness_ member variable.
}

int Pet::GetEnergy() const {
  // TODO 6d: Return the energy_ member variable.
}
