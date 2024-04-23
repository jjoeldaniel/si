#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec{5, 1, 2, 3};
  auto it = vec.begin();
  size_t i = 0;

  while (it != vec.end()) {
    std::cout << *it << std::endl;
    it++;
  }
  while (i < vec.size()) {
    std::cout << vec[i] << std::endl;
    i++;
  }

  i = 99;
  std::cout << vec[i] << std::endl;
  std::cout << vec.at(i) << std::endl;
}
