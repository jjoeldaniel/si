#include <iostream>

int main() {

  // 0x16dd5f4e8 = "Hello, world!"
  std::string origin = "Hello, world!";
  std::string *ptr = &origin;

  /* std::cout << ptr << std::endl; */
  /* std::cout << &origin << std::endl; */
  /* std::cout << *ptr << std::endl; */

  // 0x16dd5f4e8 = "Hello, Joel!"
  *ptr = "Hello, Joel!";
  /* std::cout << ptr << std::endl; */
  std::cout << *ptr << std::endl;
  std::cout << origin << std::endl;
  origin = "Hello, world!";
  std::cout << *ptr << std::endl;
  std::cout << origin << std::endl;

  auto x = *&origin;
  auto y = &origin;
  std::cout << x << std::endl;
  std::cout << y << std::endl;
}
