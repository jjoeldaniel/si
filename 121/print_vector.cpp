#include <iostream>
#include <vector>

void print_vector(std::vector<int> &items) {
  int size = items.size();

  for (int i = 0; i < size; i++) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  // [5, 1, 2]
  items.push_back(size);
}

int main() {
  std::vector<int> vec;
  vec.push_back(5);
  vec.push_back(1);

  print_vector(vec); // [5, 1]
  print_vector(vec); // [5, 1]
}
