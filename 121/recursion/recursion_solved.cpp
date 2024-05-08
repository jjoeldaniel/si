#include <iostream>
#include <vector>

std::vector<int> vec{5, 6, 7, 8};

void iterate(int index) {

  // Ensure we don't go past the final valid index
  if (index >= vec.size())
    return;

  // Print value at current index
  std::cout << "iterate(" << index << ") " << vec.at(index) << std::endl;

  // Recursively call function, increment current index
  iterate(index + 1);
}

int fibonacci(int n) {
  // Initial: Fibonacci of 0 is 0, Fibonacci of 1 is 1
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;

  // Recursive case: Fibonacci of n is the sum of the previous two Fibonacci
  // numbers
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() { std::cout << fibonacci(5); }
