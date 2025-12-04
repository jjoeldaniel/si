#include <iostream>

// 1. THE BASE CLASS (Parent)
class Robot {
public:
  // A simple function that all Robots have
  void sayHello() { std::cout << "Hello! I am a generic Robot." << std::endl; }

  // A function that we expect children to change
  void work() { std::cout << "I am processing data..." << std::endl; }
};

// 2. THE DERIVED CLASS (Child)
// TODO: Change this line to make CleanerBot inherit from Robot
class CleanerBot {
public:
  // TODO: Define a function named 'sayHello'
  // Requirement: It should print "Hello! I am cleaner Robot."
  // (This hides the parent's sayHello() function)
  void sayHello() {}

  // TODO: Define a function named 'clean'
  // Requirement: It should print "Scrubbing the floor..."
  void clean() {}
};

// =========================================================
// MAIN FUNCTION
// =========================================================

int main() {
  std::cout << "--- Robot Inheritance Tests ---" << std::endl;

  // PART 1: Basic Inheritance
  std::cout << "\n[Test 1] Creating a CleanerBot..." << std::endl;
  CleanerBot bot;

  // If inherited correctly, CleanerBot can use Robot's functions!
  bot.work();

  // PART 2: Adding New Behavior
  std::cout << "\n[Test 2] Testing unique features..." << std::endl;
  bot.clean();

  // PART 3: Redefining Behavior
  std::cout << "\n[Test 3] Testing modified behavior..." << std::endl;
  // Expectation: It should print "Hello! I am a cleaner Robot.", NOT "Hello! I
  // am a generic Robot."
  bot.sayHello();

  // PART 4: The "Parent Pointer" Trap
  std::cout << "\n[Test 4] Viewing the bot through a Parent Pointer..."
            << std::endl;
  // We create a pointer of type ROBOT, but point it at our CLEANERBOT.
  Robot *ptr = &bot;

  // Question: Which version of work() gets called?
  // Since 'ptr' is a Robot pointer, the compiler defaults to Robot's version.
  ptr->work();

  return 0;
}
