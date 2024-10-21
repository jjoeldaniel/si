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
void left_to_right(const int &left, const int &right) {
  for (int i = left; i <= right; i++) {
    if (i == right) {
      std::cout << i << std::endl;
    } else {
      std::cout << i << ", ";
    }
  }
}

// TODO: Use a `for` loop to print each number
// from right to left where left is the smaller number
//
// EXTRA: Try to print this out on the same line, comma separated
//
// ex: left = 6, right = 10
//
// output: 10, 9, 8, 7, 6
void right_to_left(const int &left, const int &right) {
  for (int i = right; i >= left; i--) {
    if (i == left) {
      std::cout << i << std::endl;
    } else {
      std::cout << i << ", ";
    }
  }
}

// TODO: Use a `for-each` loop to print each number
//
// EXTRA: Try to print this out on the same line, comma separated
//
// ex: nums = [1, 2, 3, 4]
//
// output: 1, 2, 3, 4
void print_vector(const std::vector<int> &nums) {
  // for (type name : container)

  for (int x : nums) {
    std::cout << x << ", ";
  }
  std::cout << std::endl;
}

// TODO: Use ANY loop to print `nums` reversed
//
// EXTRA: Try to print this out on the same line, comma separated
//
// ex: nums = [1, 2, 3, 4]
//
// output: 4, 3, 2, 1
void print_vector_reversed(const std::vector<int> &nums) {}

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
  const int left = 13;
  const int right = 18;
  const std::vector nums{1, 2, 3, 4, 5};
  const std::vector strs{"racecar", "house", "apple"};

  printf("\nRunning left_to_right(%d, %d)\n\n", left, right);
  left_to_right(left, right);
  printf("Running right_to_left(%d, %d)\n\n", left, right);
  right_to_left(left, right);

  std::cout << "Running print_vector(nums)\n\n";
  print_vector(nums);

  std::cout << "Running print_vector_reversed(nums)\n\n";
  print_vector_reversed(nums);

  for (const auto &str : strs) {
    printf("Running reverse_print(%s)\n\n", str);
    reverse_print(str);
  }

  return 0;
}
