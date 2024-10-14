#include <iostream>
#include <vector>

// Function to calculate the factorial of a number using a for loop
int factorial(int n) {
  int result = 1;
  return result;
}

// Function to print numbers from 1 to n using a for loop
void print_numbers_for(int n) {}

// Function to print numbers from 1 to n using a while loop
void print_numbers_while(int n) {}

// Function to calculate the sum of numbers in a vector using a for loop
int sum_vector_for(const std::vector<int> &numbers) {
  int sum = 0;
  return sum;
}

// Function to calculate the sum of numbers in a vector using a while loop
int sum_vector_while(const std::vector<int> &numbers) {
  int sum = 0;
  return sum;
}

// Function to find the maximum value in a vector using a for loop
int max_vector_for(const std::vector<int> &numbers) {
  int max = numbers[0];
  return max;
}

// Function to find the maximum value in a vector using a while loop
int max_vector_while(const std::vector<int> &numbers) {
  int max = numbers[0];
  return max;
}

// Function to check if a number is prime
bool is_prime(int num) { return true; }

int main() {
  // Test factorial function
  int n = 5;
  std::cout << "Testing factorial function\n";
  std::cout << "Recieved: " << n << std::endl;

  // Test print numbers functions
  std::cout << "\nTesting prine numbers function\n";
  std::cout << "Printing numbers from 1 to " << n << " (for loop): ";
  std::cout << std::endl;
  print_numbers_for(n);
  std::cout << "Printing numbers from 1 to " << n << " (while loop): ";
  std::cout << std::endl;
  print_numbers_while(n);

  // Test sum vector functions
  std::vector<int> numbers = {1, 2, 3, 4, 5};

  std::cout << "\nTesting sum vector functions on vector: {";
  for (size_t i = 0; i < numbers.size() - 1; i++) {
    std::cout << numbers[i] << ", ";
  }
  std::cout << numbers[numbers.size() - 1] << "}\n";

  std::cout << "Sum of vector: " << sum_vector_for(numbers) << std::endl;
  std::cout << "Sum of vector: " << sum_vector_while(numbers) << std::endl;

  // Test max vector functions
  std::cout << "\nTesting max vector functions on vector: {";
  for (size_t i = 0; i < numbers.size() - 1; i++) {
    std::cout << numbers[i] << ", ";
  }
  std::cout << numbers[numbers.size() - 1] << "}\n";
  std::cout << "Maximum value in vector: " << max_vector_for(numbers)
            << std::endl;
  std::cout << "Maximum value in vector: " << max_vector_while(numbers)
            << std::endl;

  // Test is_prime function
  std::vector nums{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  std::cout << "\nTesting is_prime function on vector: {";
  for (size_t i = 0; i < nums.size() - 1; i++) {
    std::cout << nums[i] << ", ";
  }
  std::cout << nums[nums.size() - 1] << "}\n";

  for (const auto &x : nums) {
    bool result = is_prime(x);
    if (result) {
      std::cout << x << " is prime\n";
    } else {
      std::cout << x << " is not prime\n";
    }
  }

  return 0;
}
