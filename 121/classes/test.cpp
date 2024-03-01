#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec{};

  // 0 1 2 3 4
  for (size_t i = 0; i < vec.size(); i++) {
    std::cout << i << std::endl;
  }
}
