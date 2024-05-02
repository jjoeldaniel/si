#include <iostream>

int main() {
  double a{4.0};
  double b{8.5};
  double c{16.3};

  double res = (a + b + c) * 42;
  std::cout << res << std::endl;

  return 0;
}
