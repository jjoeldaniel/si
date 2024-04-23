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

int main() { iterate(0); }
