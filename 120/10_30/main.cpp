#include <iostream>
#include <vector>

// Function that prints values from a to b
void print_range(int a, int b) {
  // TODO: Loop from a to b and print each value on the same line.
  // Note: End with a new line!
  //
  // ex. a = 3, b = 7
  // output: 3 4 5 6 7
}

// Function that doubles each element in the vector
std::vector<int> doubleElements(std::vector<int> inputVec) {
  std::vector<int> doubledVec;
  // TODO: Loop through inputVec, double each element, and add to doubledVec

  return doubledVec;
}

// Function that sums all elements in the vector
int sumElements(std::vector<int> inputVec) {
  int sum = 0;
  // TODO: Use a while loop to add each element in inputVec to sum

  return sum;
}

int main() {
  int a = 13;
  int b = 21;

  std::cout << "Printing range from " << a << " to " << b << std::endl;
  print_range(a, b);
  std::cout << std::endl;

  std::vector<int> vec{3, 5, 7, 9};
  std::cout << "Doubling vector: [ ";
  for (const auto &x : vec) {
    std::cout << x << " ";
  }
  std::cout << "]\n";
  std::cout << "Recieved: ";
  for (const auto &x : doubleElements(vec)) {

    std::cout << x << " ";
    std::cout << "]\n";
  }
  std::cout << std::endl << std::endl;

  std::vector<int> vec2{3, 4, 5, 6, 7};
  std::cout << "Sum of vector: [ ";
  for (const auto &x : vec2) {
    std::cout << x << " ";
  }
  std::cout << "]\n";
  std::cout << "Expected: "
            << vec2.size() * ((vec2.at(0) + vec2.at(vec2.size() - 1)) / 2)
            << std::endl;
  std::cout << "Recieved: " << sumElements(vec2) << std::endl;
}
