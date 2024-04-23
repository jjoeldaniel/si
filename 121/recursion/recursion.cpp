#include <iostream>
#include <vector>

std::vector<int> vec{5, 6, 7, 8};

void iterate(int index) {

  // first iteration: 0 >= 4 : FALSE
  if (index >= vec.size())
    return;

  std::cout << vec.at(index) << std::endl;

  // recursive case
  iterate(index);
}

int main() { iterate(0); }
