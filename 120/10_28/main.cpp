#include <cassert>
#include <iostream>
#include <vector>

// Create a vector containing elements from `start` to `end`
//
// ex: createAndFillVector(5, 10) produces a vector with
// the following elements:
//
// [5, 6, 7, 8, 9, 10]
std::vector<int> createAndFillVector(int start, int end) {
  std::vector<int> res;
  return res;
}

// Function to calculate the sum of all numbers in the vector
int calculateSum(const std::vector<int> &numbers) {
  // TODO: Loop through the vector and calculate the sum of all elements.
  // Hint: Initialize a variable to store the sum, then add each element to it.
  return 0;
}

// Function to find the largest number in the vector
int findLargest(const std::vector<int> &numbers) {
  // TODO: Loop through the vector to find and return the largest element.
  // Hint: Initialize a variable with the first element, then compare it with
  // each element.
  return 0;
}

// Function to calculate the average of the numbers in the vector
double calculateAverage(const std::vector<int> &numbers) {
  // TODO: Use calculateSum to get the total sum and divide by the vector's
  // size.
  return 0.0;
}

// Function to count how many numbers are greater than a given threshold
int countGreaterThan(const std::vector<int> &numbers, int threshold) {
  // TODO: Loop through the vector and count how many numbers are greater than
  // `threshold`.
  return 0;
}

int main() {

  // Test createAndFillVector
  std::vector<int> vec1 = createAndFillVector(5, 10);
  assert((vec1 == std::vector<int>{5, 6, 7, 8, 9, 10}));

  std::vector<int> vec2 = createAndFillVector(0, 3);
  assert((vec2 == std::vector<int>{0, 1, 2, 3}));

  std::vector<int> vec3 = createAndFillVector(2, 2); // Single element case
  assert((vec3 == std::vector<int>{2}));

  // Test calculateSum
  assert(calculateSum(vec1) == 45); // Sum of [5, 6, 7, 8, 9, 10] is 45
  assert(calculateSum(vec2) == 6);  // Sum of [0, 1, 2, 3] is 6
  assert(calculateSum(vec3) == 2);  // Sum of [2] is 2
  assert(calculateSum({}) == 0);    // Empty vector case

  // Test findLargest
  assert(findLargest(vec1) == 10); // Largest in [5, 6, 7, 8, 9, 10] is 10
  assert(findLargest(vec2) == 3);  // Largest in [0, 1, 2, 3] is 3
  assert(findLargest(vec3) == 2);  // Largest in [2] is 2

  // Test calculateAverage
  assert(calculateAverage(vec1) ==
         7.5); // Average of [5, 6, 7, 8, 9, 10] is 7.5
  assert(calculateAverage(vec2) == 1.5); // Average of [0, 1, 2, 3] is 1.5
  assert(calculateAverage(vec3) == 2.0); // Average of [2] is 2.0

  // Test countGreaterThan
  assert(countGreaterThan(vec1, 6) == 4); // [7, 8, 9, 10] are > 6
  assert(countGreaterThan(vec2, 1) == 2); // [2, 3] are > 1
  assert(countGreaterThan(vec3, 1) == 1); // [2] is > 1
  assert(countGreaterThan(vec1, 10) ==
         0); // No elements > 10 in [5, 6, 7, 8, 9, 10]

  std::cout << "All tests passed!" << std::endl;
  return 0;
}
