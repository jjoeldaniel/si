/*
    Welcome to your Control Flow and Functions exercise in C++!

    In this exercise, you'll practice using:
    - Conditional statements (if, else if, else)
    - Loops (for, while, do-while)
    - Functions

    Complete the tasks below by writing C++ code that meets the requirements.
    Be sure to test your code after completing each part to ensure it works as
   expected.

    INSTRUCTIONS:
    1. Follow the tasks in order.
    2. Each task will introduce you to new control flow concepts or functions.
    3. Your code should be well-structured, using functions where required.
    4. After completing the tasks, ensure that your program runs without errors.
*/

#include <iostream>

// Task 1: Function Declaration
// TODO: Create a function that takes two integers and returns the maximum of
// the two.
int findMax(int a, int b) {
  // Your code here
  return 0; // Placeholder return statement
}

// Task 2: Conditional Statements
// TODO: Write a function that takes an integer grade and prints whether the
// grade is a pass or fail. (Assume passing is 50 and above).
void checkPassFail(int grade) {
  // Your code here
}

// Task 3: For Loop
// TODO: Write a function that takes an integer `n` and prints all numbers from
// 1 to `n`.
void printNumbers(int n) {
  // Your code here
}

// Task 4: While Loop
// TODO: Write a function that takes an integer and prints all even numbers from
// 0 up to that number.
void printEvens(int n) {
  // Your code here
}

// Task 5: Do-While Loop
// TODO: Write a function that prompts the user to enter a number between 1
// and 10. If the number is outside this range, keep asking until they enter a
// valid number.
void askForNumber() {
  // Your code here
}

int main() {
  // Test Task 1
  std::cout << "Testing Task 1" << std::endl;

  int num1 = 10, num2 = 20;
  std::cout << "Max of " << num1 << " and " << num2
            << " is: " << findMax(num1, num2) << std::endl;

  // Test Task 2
  std::cout << "Testing Task 2" << std::endl;

  checkPassFail(49);
  checkPassFail(50);
  checkPassFail(51);

  // Test Task 3
  std::cout << "Testing Task 3" << std::endl;

  int n = 10;
  std::cout << "Numbers from 1 to " << n << ": ";
  printNumbers(n);

  // Test Task 4
  std::cout << "Testing Task 4" << std::endl;

  std::cout << "Even numbers up to " << n << ": ";
  printEvens(n);

  // Test Task 5
  std::cout << "Testing Task 5" << std::endl;

  askForNumber();

  return 0;
}
