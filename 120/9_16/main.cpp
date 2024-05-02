#include <iostream>
#include <string>

/**
 * TODO: Function 1: add
 * - This function should take two integers as input parameters.
 * - It should return the sum of the two integers.
 * - Example: If a = 3 and b = 4, the function should return 7.
 */


/**
 * TODO: Function 2: multiply
 * - This function should take two integers as input parameters.
 * - It should return the product (multiplication) of the two integers.
 * - Example: If a = 3 and b = 5, the function should return 15.
 */

/**
 * TODO: Function 3: square
 * - This function should take a single integer as input.
 * - It should return the square of the number (num * num).
 * - Example: If num = 7, the function should return 49.
 */

/**
 * TODO: Function 4: sumThree
 * - This function should take three integers as input.
 * - It should return the sum of these three integers.
 * - Example: If a = 1, b = 2, and c = 3, the function should return 6.
 */

/**
 * TODO: Function 5: absoluteValue
 * - This function should take a single integer as input.
 * - It should return the absolute value of the number.
 * - You can use the built-in function `abs()` from `<cmath>` if you'd like.
 * - Example: If num = -10, the function should return 10.
 */

/**
 * TODO: Function 6: concatenateStrings
 * - This function should take two strings as input.
 * - It should concatenate them and return the resulting string.
 * - Example: If str1 = "hello" and str2 = "world", the function should return "helloworld".
 */

/**
 * TODO: Function 7: getSecondChar
 * - This function should take a string as input.
 * - It should return the second character in the string.
 * - Example: If str = "apple", the function should return 'p'.
 */

// Main function to test the student-completed functions
int main() {
  // 1. Test add function
  std::cout << "Add 3 and 4: " << add(3, 4) << std::endl;

  // 2. Test multiply function
  std::cout << "Multiply 3 and 5: " << multiply(3, 5) << std::endl;

  // 3. Test square function
  std::cout << "Square of 7: " << square(7) << std::endl;

  // 4. Test sumThree function
  std::cout << "Sum of 1, 2, and 3: " << sumThree(1, 2, 3) << std::endl;

  // 5. Test absoluteValue function
  std::cout << "Absolute value of -10: " << absoluteValue(-10) << std::endl;

  // 6. Test concatenateStrings function
  std::cout << "Concatenation of 'hello' and 'world': "
            << concatenateStrings("hello", "world") << std::endl;

  // 7. Test getSecondChar function
  std::cout << "Second character in 'apple': " << getSecondChar("apple") << std::endl;

  return 0;
}
