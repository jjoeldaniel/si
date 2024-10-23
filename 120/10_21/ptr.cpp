#include <iostream>
#include <vector>

// pie = num
void increment(int &pie) {
  pie++;
}

int main() {

  int num = 5;

  int* ptr = &num;

  std::cout << num << std::endl; // 5
  std::cout << ptr << std::endl; // 0x8e312...
  std::cout << *ptr << std::endl; // 5
                                  
                                  
  increment(num);
  increment(num);
  std::cout << num << std::endl; // 
                                 //
  std::vector nums{1, 2, 4};

  for (int &number : nums) {
    number *= 2;
  }
  for (int i = 0; i < nums.size(); i++) {
    nums[i] = nums[i] * 2;
  }
  for (int &number : nums) {
    std::cout << number << ", ";
  }
  std::cout << std::endl;

}
