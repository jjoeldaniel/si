#include <iostream>
#include <string>

/**
 * @brief Determines the letter grade for a given numerical grade.
 *
 * This function takes an integer grade as input and returns the
 * corresponding letter grade based on the following scale:
 *
 * - A: 90-100
 * - B: 80-89
 * - C: 70-79
 * - D: 60-69
 * - F: 0-59
 *
 * If the grade is outside the range of 0-100, the function will
 * return "Error" to indicate invalid input.
 *
 * @param grade The student's numerical grade (integer).
 * @return A string representing the letter grade ("A", "B", "C", "D", "F")
 *         or "Error" if the input is invalid.
 */
std::string getLetterGrade(int grade) {
  // TODO: Check if the grade is between 90 and 100, inclusive.
  // If true, return "A".

  // TODO: Check if the grade is between 80 and 89, inclusive.
  // If true, return "B".

  // TODO: Check if the grade is between 70 and 79, inclusive.
  // If true, return "C".

  // TODO: Check if the grade is between 60 and 69, inclusive.
  // If true, return "D".

  // TODO: Check if the grade is between 0 and 59, inclusive.
  // If true, return "F".

  // TODO: If none of the above conditions are met, return "Error"
  // because the grade is out of bounds.
  return "";
}

void runTest(int testNumber, int inputGrade, const std::string &expected) {
  std::string result = getLetterGrade(inputGrade);

  if (result == expected) {
    std::cout << "Test " << testNumber << " passed!" << std::endl;
  } else {
    std::cout << "Test " << testNumber << " failed. Input: " << inputGrade
              << " | Expected: " << expected << " | Got: " << result
              << std::endl;
  }
}

void runAllTests() {
  // Test cases: input grade, expected output
  runTest(1, 95, "A");
  runTest(2, 85, "B");
  runTest(3, 75, "C");
  runTest(4, 65, "D");
  runTest(5, 55, "F");
  runTest(6, -5, "Error");
  runTest(7, 105, "Error");
  runTest(8, 100, "A");
  runTest(9, 0, "F");
  runTest(10, 89, "B");
}

int main() {
  runAllTests(); // Run all the tests

  return 0;
}
