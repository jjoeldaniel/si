#include <iostream>

class Square {
public:
  Square(size_t height, size_t width) {
    this->height_ = height;
    this->width_ = width;
    this->area_ = height * width;
  }

  /**
   * Prints out height, width, and area.
   */
  void print() {
    std::cout << "Height: " << this->height_ << std::endl;
    std::cout << "Width: " << this->width_ << std::endl;
    std::cout << "Area: " << this->area_ << std::endl;
  }

private:
  size_t height_;
  size_t width_;
  double area_;
};

int main() {
  Square sq = Square(5, 4);
  sq.print();
}
