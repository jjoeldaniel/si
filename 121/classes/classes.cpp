#include <cassert>
#include <iostream>
#include <stdexcept>
#include <vector>

class GroceryItem {
public:
  std::string name;
  int quantity;
  float price;

  GroceryItem(std::string name, float price, int quantity = 1) {
    // Hint: Initialize all our member variables here
    this->name = name;
    this->price = price;
    this->quantity = quantity;
  }

  /**
   *  Add `n` number of items to quantity
   *
   */
  void addQuantity(size_t n) { this->quantity += n; }

  /**
   * Change item price to new price `n`
   *
   */
  void changePrice(float n) { this->price = n; }

  /**
   *  Adjust price by `n`
   *
   */
  void adjustPrice(float n) { this->price += n; }

  /**
   *  Prints an items info
   *
   *  ex. (5) Banana - $1.15
   */
  void printItem() {}

  // We are using our current object (access member variables with
  // `this->variable` syntax) and compare it to `other` (ex. this->varible ==
  // other.variable) and returning true/false when equal/not equal.
  bool operator==(const GroceryItem &other) { return true; }
  bool operator!=(const GroceryItem &other) { return false; }
};

class ShoppingCart {
public:
  /**
   * Pushes a `GroceryItem` into our cart
   *
   * If an item already exists, increment its quantity
   *
   */
  void push(GroceryItem item) {}

  /**
   * Checks if ShoppingCart has a GroceryItem `item`
   *
   * Returns the index of the found item or -1 if not found
   *
   */
  int hasItem(GroceryItem item) { return -1; }

  /**
   * Pops the first instance of a GroceryItem `item`
   * and returns the value
   *
   * Throws std::out_of_range if not found
   *
   */
  GroceryItem pop(GroceryItem item) {
    throw std::out_of_range("Item does not exist!");
  }

  /**
   * Pops the element at a given index and returns
   * the value
   *
   * Throws std::out_of_range if not found
   *
   */
  GroceryItem pop(size_t index) {
    throw std::out_of_range("Not a valid index");
  }

  /**
   * Pops the most recently inserted GroceryItem and
   * returns the value
   *
   * Throws std::out_of_range if cart is empty
   *
   */
  GroceryItem pop() { throw std::out_of_range("ShoppingCart is empty!"); }

  /**
   *Print all `GroceryItem` objects in our cart
   *
   */
  void displayCart() {}

private:
  std::vector<GroceryItem> cart;
};

// Do not edit this function
void log(std::string s) { std::cout << "[LOG] " << s << std::endl; }

int main() {
  ShoppingCart cart;

  cart.push(GroceryItem("bananas", 1.25));
  cart.push(GroceryItem("ps5", 350));

  cart.push(GroceryItem("strawberry", 1.25));
  cart.push(GroceryItem("strawberry", 1.25));

  cart.displayCart();

  log("Testing adjustPrice()");
  GroceryItem lastItem = cart.pop();
  lastItem.printItem();
  float oldPrice = lastItem.price;
  lastItem.adjustPrice(1.0);
  assert(oldPrice + 1.0 == lastItem.price);

  log("Testing addQuantity()");
  size_t oldQuantity = lastItem.quantity;
  lastItem.addQuantity(10);
  assert(oldQuantity + 10 == lastItem.quantity);

  log("Testing changePrice()");
  lastItem.changePrice(oldPrice);
  assert(oldPrice == lastItem.price);

  cart.displayCart();

  log("Testing GroceryCart comparison operators");
  assert(GroceryItem("strawberry", 1.0) == GroceryItem("strawberry", 1.0));
  assert(GroceryItem("strawberryy", 1.0) != GroceryItem("strawberry", 1.0));
  assert(GroceryItem("strawberry", 2.0) != GroceryItem("strawberry", 1.0));

  return 0;
}
