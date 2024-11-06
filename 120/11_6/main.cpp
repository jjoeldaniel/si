#include <iostream>
#include <vector>

// Implement a function to print the 'matrix' to the console
void printMatrix(std::vector<std::vector<int>> matrix) {
  // Hint: Use nested loops to iterate over rows and columns
  // Hint: Use `std::cout` to print each element
}

// Implement a function to calculate the sum of all elements in the 'matrix'
int calculateSum(std::vector<std::vector<int>> matrix) {
  // Hint: Initialize a variable to store the sum
  // Hint: Use nested loops to iterate over rows and columns
  // Hint: Add each element to the sum
  // Hint: Return the calculated sum
  int sum = 0;
  return sum;
}

// Implement a function to find the largest element in the 'matrix'
int findLargestElement(std::vector<std::vector<int>> matrix) {
  // Hint: Initialize a variable to store the largest element
  // Hint: Use nested loops to iterate over rows and columns
  // Hint: Compare each element with the current largest element
  // Hint: Update the largest element if necessary
  // Hint: Return the largest element
  int largest = matrix[0][0];
  return largest;
}

int main() {
  std::vector<std::vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  // Print the matrix
  printMatrix(matrix);

  // Calculate and print the sum
  int sum = calculateSum(matrix);
  std::cout << "Sum of all elements: " << sum << std::endl;

  // Find and print the largest element
  int largest = findLargestElement(matrix);
  std::cout << "Largest element: " << largest << std::endl;

  return 0;
}
