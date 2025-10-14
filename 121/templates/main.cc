#include "pair_solved.hpp"
#include <iostream>
#include <string>

void runTests() {
  std::cout << "--- Running Tests ---" << std::endl;

  // Test 1: Pair with two integers
  std::cout << "\nTest 1: Pair<int, int>" << std::endl;
  Pair<int, int> intPair(10, 20);
  std::cout << "Expected: (10, 20), Got: " << intPair << std::endl;
  std::cout << "First value: " << intPair.getFirst() << std::endl;
  std::cout << "Second value: " << intPair.getSecond() << std::endl;

  // Test 2: Pair with a double and a string
  std::cout << "\nTest 2: Pair<double, std::string>" << std::endl;
  Pair<double, std::string> mixPair(3.14, "PI");
  std::cout << "Expected: (3.14, PI), Got: " << mixPair << std::endl;
  std::cout << "First value: " << mixPair.getFirst() << std::endl;
  std::cout << "Second value: " << mixPair.getSecond() << std::endl;

  // Test 3: Pair with a character and a boolean
  std::cout << "\nTest 3: Pair<char, bool>" << std::endl;
  Pair<char, bool> charBoolPair('A', true);
  // Note: 'true' will print as '1'
  std::cout << "Expected: (A, 1), Got: " << charBoolPair << std::endl;
  std::cout << "First value: " << charBoolPair.getFirst() << std::endl;
  std::cout << "Second value: " << charBoolPair.getSecond() << std::endl;

  // Test 4: Const Pair object
  std::cout << "\nTest 4: const Pair object" << std::endl;
  const Pair<std::string, int> constPair("Age", 21);
  std::cout << "Expected: (Age, 21), Got: " << constPair << std::endl;
  std::cout << "First value: " << constPair.getFirst() << std::endl;

  std::cout << "\n--- Tests Complete ---" << std::endl;
}

int main() {
  runTests();
  return 0;
}

/*
------------- EXPECTED OUTPUT -------------

--- Running Tests ---

Test 1: Pair<int, int>
Expected: (10, 20), Got: (10, 20)
First value: 10
Second value: 20

Test 2: Pair<double, std::string>
Expected: (3.14, PI), Got: (3.14, PI)
First value: 3.14
Second value: PI

Test 3: Pair<char, bool>
Expected: (A, 1), Got: (A, 1)
First value: A
Second value: 1

Test 4: const Pair object
Expected: (Age, 21), Got: (Age, 21)
First value: Age

--- Tests Complete ---

*/
