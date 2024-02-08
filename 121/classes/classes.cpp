#include <iostream>
#include <vector>

class GroceryItem {
public:
  std::string name;
  int quantity = 1;
  float price;

  GroceryItem(std::string name, float price, int quantity = 1) {
    // TODO: Complete this function
    // Set our member variables
  }

  void printItem() {
    // TODO: Complete this function
    // Example output: "(1) bananas $1.25"
  }
};

class ShoppingCart {
public:
  std::vector<GroceryItem> cart;
  void insert(GroceryItem item) {
    // TODO: Complete this function
    // Insert a `GroceryItem` into our cart
  }
  void displayCart() {
    // TODO: Complete this function
    // Print all `GroceryItem` objects in our cart
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
