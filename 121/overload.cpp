#include <iostream>

class Square {
public:
  Square(int x, int y) {
    this->height = x;
    this->width = y;
    this->area = x * y;
  }

  friend std::ostream &operator<<(std::ostream &os, Square sq) {
    os << "Height: " << sq.height << " Width: " << sq.width
       << " Area: " << sq.area;
    return os;
  };

private:
  int height;
  int width;
  int area;
};

int main() {
  Square square = Square(2, 4);
  std::cout << square;
}
