#include <iostream>

void add_ref(int &x) { x += 2; }
int add(int y) { return y + 2; }

int main() {
  int x = 2;
  add_ref(x);
  std::cout << x << std::endl;

  int y = 2;
  y = add(y);
  std::cout << y << std::endl;
}
