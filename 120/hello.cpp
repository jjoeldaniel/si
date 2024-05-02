#include <iostream>

int hello() {
  return 1;
}

int main() {
  int variable = hello();

	std::cout << "Hello, world! ";
	std::cout << "Hello, world!" << std::endl;

  int num;
  num = 5;

  int num2 = 5;

  int num3{5};

  int num4(5);

  std::cout << num << " " << num2;
  // 5 5
  //
  // what we want: 5, 5,5 ,5 


  return 0;
}
