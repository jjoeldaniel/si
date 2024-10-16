#include <cstdio>
#include <iostream>
#include <vector>

// TODO: Use a `for` loop to print each number
// from left to right where left is the smaller number
//
// EXTRA: Try to print this out on the same line, comma separated
//
// ex: left = 6, right = 10
//
// output: 6, 7, 8, 9, 10
void left_to_right(const int &left, const int &right) {}

// TODO: Use a `for` loop to print each number
// from right to left where left is the smaller number
//
// EXTRA: Try to print this out on the same line, comma separated
//
// ex: left = 6, right = 10
//
// output: 10, 9, 8, 7, 6
void right_to_left(const int &left, const int &right) {}

// TODO: Use a `for-each` loop to print each number
//
// EXTRA: Try to print this out on the same line, comma separated
//
// output: 1, 2, 3, 4
void print_vector(const std::vector<int> &nums) {}

// TODO: Use a loop (any!) to print a string in reverse
//
// Print the characters on the same line
// ex. str = "hello"
//
// output: olleh
//
// You CANNOT modify the string.
void reverse_print(const std::string &str) {}

// DO NOT MODIFY `main()`
int main() {
  int left = 13;
  int right = 18;

  printf("\nRunning left_to_right(%d, %d)\n\n", left, right);
  left_to_right(left, right);
  printf("Running right_to_left(%d, %d)\n\n", left, right);
  right_to_left(left, right);

  std::cout << "Running print_vector(nums)\n\n";
  std::vector nums{1, 2, 3, 4, 5};
  print_vector(nums);

  std::vector strs{"racecar", "house", "apple"};
  for (const auto &str : strs) {
    printf("Running reverse_print(%s)\n\n", str);
    reverse_print(str);
  }

  return 0;
}
