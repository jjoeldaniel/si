#ifndef PAIR_HPP
#define PAIR_HPP

#include <iostream>

// TODO: Part 1 - Create the class template
// Make the `Pair` class a template that accepts two type parameters,
// let's call them T1 and T2.
template <typename T1, typename T2> class Pair {
public:
  // TODO: Part 3 - Implement the constructor
  // This constructor should initialize the member variables `first` and
  // `second` with the provided arguments `val1` and `val2`.
  Pair(T1 val1, T2 val2) {
    first = val1;
    second = val2;
  }

  // TODO: Part 4 - Implement the getter functions
  // `getFirst()` should return the value of the `first` member variable.
  // `getSecond()` should return the value of the `second` member variable.
  T1 getFirst() const { return first; }

  T2 getSecond() const { return second; }

private:
  // TODO: Part 2 - Add member variables
  // Add two private member variables:
  // 1. A variable of type T1 named `first`.
  // 2. A variable of type T2 named `second`.
  T1 first;
  T2 second;
};

#endif // PAIR_HPP
