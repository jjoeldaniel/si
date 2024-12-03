#include <fstream>
#include <iostream>
#include <vector>

int main() {
  // Open a file "numbers.txt"
  std::fstream file("numbers.txt");

  // Check if the file opened successfully

  // Read numbers from the file and store in vector
  // Psst: Don't forget to close the file!
  int num;

  // Calculate the sum of numbers
  int sum = 0;

  // Print the sum
  std::cout << "Sum of numbers: " << sum << std::endl;

  // Print numbers in reverse order
  std::cout << "Numbers in reverse order: " << std::endl;

  return 0;
}
