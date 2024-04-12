#include <iostream>

int main() {

  int x = 5;
  int *y = &x;

  int *z = new int(10);
  std::cout << *z << std::endl;
  delete z;
  z = nullptr;
  std::cout << *z << std::endl;
  z = new int(11);
  std::cout << *z << std::endl;

  return 0;
}
