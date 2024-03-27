#include <iostream>

void print_address(std::string &x) { std::cout << &x; }

int main() {
  std::string hi = "hi!";
  // Hi :) its me tomas
  // TODO:
  //
  // 1. Make a pointer to `hi`
  // 2. Print out the memory address of `hi` using the pointer.
  // 3. Update `hi`s value using the pointer
  // 4. Print out the value of `hi` using the pointer.

  std::cout << &hi << std::endl;
  print_address(hi);

  return 0;
}
