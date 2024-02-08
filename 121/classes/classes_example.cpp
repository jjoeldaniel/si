#include <iostream>
#include <vector>

class GroceryItem {
public:
  std::string name;
  int quantity = 1;
  float price;

  GroceryItem(std::string name, float price, int quantity = 1) {
    this->name = name;
    this->quantity = quantity;
    this->price = price;
  }

  void printItem() {
    std::cout << "(" << quantity << ") " << name << " $" << price << std::endl;
  }
};

class ShoppingCart {
public:
  std::vector<GroceryItem> cart;
  void insert(GroceryItem item) { cart.emplace_back(item); }
  void displayCart() {
    for (auto i : cart) {
      i.printItem();
    }
  }
};

int main() {
  ShoppingCart cart;
  cart.displayCart();

  cart.insert(GroceryItem("bananas", 1.25));
  cart.insert(GroceryItem("ps5", 350));
  cart.displayCart();

  return 0;
}
