#include <iostream>
#include <stdexcept>
#include <vector>

int main() {
  int x;
  std::vector vec{0, 1, 2, 3, 4, 5};

  while (true) {
    std::cin >> x;

    if (x < 0 || x >= vec.size())
      throw(std::out_of_range("invalid"));
    std::cout << vec[x];
  }
}
