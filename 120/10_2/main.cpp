#include <iostream>
#include <random>

// DO NOT TOUCH :)

/**
 * Generates a random number between `low` and `high` (inclusive)
 *
 * Returns the generated number
 */
int random_number(int low, int high) {
  std::random_device rd;  // obtain a random number from hardware
  std::mt19937 gen(rd()); // seed the generator
  std::uniform_int_distribution<> distr(low, high); // define the range

  return distr(gen);
}

int main() {
  // 1. Generate a random number between 1 and 100

  // 2. Declare variables for the user's guess and number of attempts

  // 3. Start the game
  std::cout << "Welcome to the Guess the Number Game!" << std::endl;
  std::cout << "I have chosen a number between 1 and 100." << std::endl;

  // 4. Create a loop to keep the game running until the user guesses correctly
  while (true) {
    std::cout << "Enter your guess: ";

    // 5. Check if the guess is too high, too low, or correct using if, else if,
    // and else
    //
    // If they guess correctly, print the random number and the amount of
    // attempts it took to correctly guess
  }

  return 0;
}
