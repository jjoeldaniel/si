#include <iostream>

class Calculator {
public:
  Calculator(int x) { this->x = x; }

  void print() { std::cout << x << std::endl; }

  int add(int n) {
    x += n; // x = 5, n = 3, add(3) -> x = 8
    return x;
  }

  int sub(int n) {
    x -= n;
    return x;
  }

private:
  int x;
};

int main() {
  Calculator calc{5};
  calc.print();
  calc.add(3);
  calc.print();
  calc.sub(3);
  calc.print();
}
