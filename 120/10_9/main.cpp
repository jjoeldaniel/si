#include <iostream>
#include <string>
#include <vector>

// Exercise 1: Sum of Numbers from 1 to 100
void sumOfNumbers() {
  int sum = 0;

  for (int i = 1; i <= 100; i++) {
    sum += i;
  }

  std::cout << "Sum of numbers from 1 to 100 is: " << sum << std::endl;
}

// Exercise 2: Print Multiplication Table from 1 to 10
void multiplicationTable(int number) {
  std::cout << "Multiplication table for " << number << ": ";

  for (int i = 1; i <= 10; i++) {
    std::cout << number << " * " << i << " = " << number * i << std::endl;
  }
}

// Exercise 3: Print Even Numbers from 1 to 50
void printEvenNumbers() {
  std::cout << "Even numbers from 1 to 50 are: ";
  for (int i = 1; i <= 50; i++) {
    if (i % 2 == 0) {
      std::cout << i << std::endl;
    }
  }
}

// Exercise 4: Count Vowels in a String
void countVowels(const std::string &str) {
  int vowelCount = 0;
  int size = str.size();
  // vowels: a e i
  //
  // std::string str = "hello"
  // str.size() == 5

  for (int i = 0; i < size; i++) {
    char a = str.at(i);

    if (a == 'a' || a == 'e' || a == 'i') {
      vowelCount++;
    }
  }

  std::cout << "Number of vowels in the string: " << vowelCount << std::endl;
}

// Exercise 5: Sum of Array Elements
void sumOfArray(const std::vector<int> &arr) {
  int sum = 0;

  for (int i = 0; i < arr.size(); i++) {
    sum += arr.at(i);
  }

  std::cout << "Sum of array elements: " << sum << std::endl;
}

// Main function to demonstrate all exercises
int main() {

  // Exercise 1
  sumOfNumbers();

  // Exercise 2
  int number;
  std::cout << "Enter a number for the multiplication table: ";
  std::cin >> number;
  multiplicationTable(number);

  // Exercise 3
  std::string str;
  std::cout << "Enter a string to count vowels: ";
  std::cin >> str;
  countVowels(str);

  // Exercise 4
  std::vector<int> arr = {10, 20, 30, 40, 50};
  sumOfArray(arr);

  return 0;
}
