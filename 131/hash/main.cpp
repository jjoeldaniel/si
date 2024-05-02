#include <array>
#include <assert.h>
#include <iostream>
#include <string>
#include <vector>

// DO NOT MODIFY THESE :)
const size_t MAX_SIZE = 100;

template <typename K, typename V> class HashMap {
public:
  // DO NOT MODIFY THESE :)
  size_t hash(K key) {
    std::hash<K> hasher;
    return hasher(key) % MAX_SIZE;
  }

  /**
   * Inserts a key and value into our HashMap
   *
   * Throw an exception if the key already exists
   */
  void insert(K key, V value) {
    // NOTE: Use std::make_pair(value1, value2) to create a pair
  }

  /**
   * Updates an existing key and value in our HashMap
   *
   * Throw an exception if the key does not exist
   */
  void update(K key, V value) {}

  /**
   * Returns an associated value for a key in our HashMap
   *
   */
  V at(K key) {}

  /**
   * Returns true if our HashMap contains `key`
   *
   * This is given as a freebie :)
   */
  bool contains(K key) {
    size_t index = hash(key);
    std::vector<std::pair<K, V>> &destination = this->internal_array[index];

    for (auto &x : destination) {
      if (x.first == key) {
        return true;
      }
    }
    return false;
  };

private:
  std::array<std::vector<std::pair<K, V>>, MAX_SIZE> internal_array;
};

int main() {
  HashMap<std::string, int> map;

  // Test 1: Insert a key-value pair and check if it exists
  std::string key1 = "Hello, world!";
  int value1 = 5;
  map.insert(key1, value1);
  assert(map.contains(key1));
  assert(map.at(key1) == value1);
  std::cout << "Test 1 passed.\n";

  // Test 2: Insert another key-value pair and check if it exists
  std::string key2 = "Goodbye, world!";
  int value2 = 10;
  map.insert(key2, value2);
  assert(map.contains(key2));
  assert(map.at(key2) == value2);
  std::cout << "Test 2 passed.\n";

  // Test 3: Update a value and check if it has been updated
  int newValue1 = 15;
  map.update(key1, newValue1);
  assert(map.at(key1) == newValue1);
  std::cout << "Test 3 passed.\n";

  // Test 4: Check exception is thrown when inserting an existing key
  try {
    map.insert(key1, value1);
  } catch (const std::logic_error &e) {
    std::cout << "Test 4 passed.\n";
  }

  // Test 5: Check exception is thrown when updating a non-existing key
  try {
    map.update("Non-existing key", 20);
  } catch (const std::logic_error &e) {
    std::cout << "Test 5 passed.\n";
  }

  // Test 6: Check exception is thrown when accessing a non-existing key
  try {
    map.at("Non-existing key");
  } catch (const std::logic_error &e) {
    std::cout << "Test 6 passed.\n";
  }

  return 0;
}
