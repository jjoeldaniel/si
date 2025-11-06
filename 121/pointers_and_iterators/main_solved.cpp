/**
 * Instructions:
 * 1.  Read through the `Item` struct and the `Inventory` class skeleton.
 * 2.  Implement the `add_item` method.
 * 3.  Implement the `print_inventory` method.
 * 4.  Implement the `find_item_by_id` method.
 * 5.  Implement the `remove_item_by_id` method.
 */

#include <iostream>
#include <memory>
#include <string>
#include <vector>

/**
 * @class Item
 * Represents an item in our inventory.
 * We've added print statements to the constructor and destructor
 * so you can SEE when memory is allocated and deallocated.
 *
 * DO NOT MODIFY :)
 */
class Item {
public:
  int id;
  std::string name;

  Item(int i, std::string n) : id(i), name(std::move(n)) {
    std::cout << "  [Constructor] Creating Item " << id << ": " << name
              << std::endl;
  }
  ~Item() {
    std::cout << "  [Destructor] Destroying Item " << id << ": " << name
              << std::endl;
  }
};

/**
 * @class Inventory
 * Manages a collection of items using smart pointers.
 */
class Inventory {
private:
  // We use a vector of shared_ptr<Item>. This means the vector
  // "owns" a reference to each Item. If other parts of the code
  // also hold a shared_ptr to an Item, the Item won't be destroyed
  // until ALL references are gone.
  std::vector<std::shared_ptr<Item>> items;

public:
  /**
   * TO-DO 1: Add a new item to the inventory.
   *
   * Create a new `Item` object on the heap using `std::make_shared`.
   * Then, add the resulting `std::shared_ptr<Item>` to the `items` vector.
   */
  void add_item(int id, const std::string &name) {
    auto new_item_ptr = std::make_shared<Item>(id, name);
    items.push_back(new_item_ptr);
  }

  /**
   * TO-DO 2: Print all items in the inventory.
   *
   * Use a **range-based for loop** to iterate over the `items` vector.
   * For each `item_ptr` in the vector, print its `id`, `name`,
   * and the current `use_count()` of the shared pointer.
   */
  void print_inventory() const {
    std::cout << "\n--- Inventory Listing ---" << std::endl;
    for (const auto &item_ptr : items) {
      if (item_ptr) { // Always good to check if a pointer is not null
        std::cout << "  ID: " << item_ptr->id << ", Name: " << item_ptr->name
                  << " (Use Count: " << item_ptr.use_count() << ")"
                  << std::endl;
      }
    }
    std::cout << "-------------------------" << std::endl;
  }

  /**
   * TO-DO 3: Find an item by its ID.
   *
   * Use an **explicit iterator for loop** (with .begin(), .end(), ++it)
   * to search the `items` vector.
   *
   * If an item with the matching `id` is found, return the
   * `std::shared_ptr<Item>` from the vector.
   *
   * If no item is found, return `nullptr`.
   */
  std::shared_ptr<Item> find_item_by_id(int id) {
    for (auto it = items.begin(); it != items.end(); ++it) {
      // *it gives the shared_ptr
      // (*it)->id accesses the id member of the Item
      if ((*it)->id == id) {
        return *it; // Return the shared_ptr
      }
    }
    return nullptr; // Not found
  }

  /**
   * TO-DO 4: Remove an item by its ID.
   *
   * Use an **explicit iterator for loop** to search the `items` vector.
   *
   * If an item with the matching `id` is found:
   * 1.  Use the `items.erase(it)` method to remove it from the vector.
   * 2.  Return `true` to signal success.
   *
   * If no item is found, return `false`.
   *
   * Note: `vector::erase(it)` is tricky! It invalidates the iterator `it`.
   * After erasing, the `it` you passed is no longer valid.
   * However, `erase` conveniently returns a *new*, valid iterator
   * pointing to the element *after* the one you just erased.
   * A common pattern is:
   * it = items.erase(it);
   * But since we are returning right after, we can just call:
   * items.erase(it);
   * return true;
   * ... and let the loop terminate.
   */
  bool remove_item_by_id(int id) {
    for (auto it = items.begin(); it != items.end(); ++it) {
      if ((*it)->id == id) {
        items.erase(it); // Erase the element at this iterator
        return true;     // Return success
      }
    }
    return false; // Not found
  }

  // --- Helper functions for testing (Do not modify) ---
  size_t get_size() const { return items.size(); }
};

// ===================================================================
// === SIMPLE TEST SUITE (Do not modify) ===
// ===================================================================

int tests_passed = 0;
int tests_failed = 0;

void TEST(const std::string &test_name, bool condition) {
  if (condition) {
    std::cout << "[PASS] " << test_name << std::endl;
    tests_passed++;
  } else {
    std::cout << "[FAIL] " << test_name << std::endl;
    tests_failed++;
  }
}

void run_tests() {
  std::cout << "--- Running Test Suite ---" << std::endl;

  Inventory inv;

  // Test 1: Add items
  std::cout << "\n[Test 1: Add Items]" << std::endl;
  inv.add_item(101, "Sword");
  inv.add_item(102, "Shield");
  TEST("Add item (size == 2)", inv.get_size() == 2);

  // Test 2: Find items (uses explicit iterator loop)
  std::cout << "\n[Test 2: Find Items]" << std::endl;
  auto item1 = inv.find_item_by_id(101);
  TEST("Find existing item (not null)", item1 != nullptr);
  if (item1) {
    TEST("Find existing item (correct name)", item1->name == "Sword");
  }
  auto item_nonexist = inv.find_item_by_id(999);
  TEST("Find non-existing item (is null)", item_nonexist == nullptr);

  // Test 3: Shared Pointers and Use Count
  std::cout << "\n[Test 3: Check Use Counts]" << std::endl;
  // After item1 is created, it AND the vector's pointer both point to the item.
  TEST("Initial use count is 2", item1 ? item1.use_count() == 2 : false);
  std::shared_ptr<Item> item1_copy = item1;
  // After item1_copy is created, it, item1, AND the vector's pointer all point
  // to the item.
  TEST("After copy, use count is 3", item1 ? item1.use_count() == 3 : false);

  // Test 4: Remove items (uses explicit iterator loop + erase)
  std::cout << "\n[Test 4: Remove Items]" << std::endl;
  bool removed = inv.remove_item_by_id(102);
  TEST("Remove existing item returns true", removed == true);
  TEST("Remove decreases size", inv.get_size() == 1);
  TEST("Find removed item (is null)", inv.find_item_by_id(102) == nullptr);
  bool not_removed = inv.remove_item_by_id(999);
  TEST("Remove non-existing item returns false", not_removed == false);

  // Test 5: Test shared_ptr memory management
  // The inventory no longer holds a ptr to item 101, but 'item1' and
  // 'item1_copy' do.
  std::cout << "\n[Test 5: Memory Management]" << std::endl;
  bool removed_101 = inv.remove_item_by_id(101);
  TEST("Removed last item from inventory", removed_101 && inv.get_size() == 0);
  std::cout << "  > Inventory is empty. 'item1_copy' still exists."
            << std::endl;
  TEST("Item 101 still exists (use count == 2)",
       item1_copy ? item1_copy.use_count() == 2 : false);

  std::cout << "  > Releasing 'item1' smart pointer..." << std::endl;
  item1 = nullptr;
  TEST("Item 101 still exists (use count == 1)",
       item1_copy ? item1_copy.use_count() == 1 : false);

  std::cout << "  > Releasing 'item1_copy' smart pointer. Expect ~Item 101..."
            << std::endl;
  item1_copy = nullptr; // Last shared_ptr is gone. Destructor should be called.

  // Test 6: Print (uses range-based loop)
  std::cout << "\n[Test 6: Print Inventory]" << std::endl;
  inv.add_item(201, "Potion");
  inv.print_inventory(); // Manual check: should show one Potion.
  TEST("Manual Check: 'Print Inventory' should show 1 item (Potion)", true);

  // --- Final Results ---
  std::cout << "\n--- Test Results ---" << std::endl;
  std::cout << "Passed: " << tests_passed << std::endl;
  std::cout << "Failed: " << tests_failed << std::endl;
  if (tests_failed == 0) {
    std::cout << "\n*** All tests passed! Great job! ***" << std::endl;
  } else {
    std::cout << "\n*** Some tests failed. Keep trying! ***" << std::endl;
  }
}

int main() {
  run_tests();
  return 0;
}
