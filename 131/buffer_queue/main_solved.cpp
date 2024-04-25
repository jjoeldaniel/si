#include <iostream>
#include <string>
#include <vector>

class Queue {
public:
  void add(std::string str) {
    /*
     * TODO: Add `str` to our Queue
     *
     * Given a string `str`, we are expected to split
     * this string into chunks of 4 characters and append
     * each chunk to our std::vector `vec`.
     */
    std::string word{""};

    for (size_t i = 0; i < str.size(); i++) {
      if (word.size() == 4) {
        this->vec.push_back(word);
        word = "";
      }
      word.push_back(str[i]);
    }
    if (!word.empty())
      this->vec.push_back(word);
  }
  std::string front() {
    /*
     * TODO: Peek at the front of the Queue
     *
     * Implement a function that returns the value at
     * the front of the Queue
     */
    if (!vec.empty())
      return this->vec.front();
    return "";
  }
  std::string back() {
    /*
     * TODO: Peek at the back of the Queue
     *
     * Implement a function that returns the value at
     * the back of the Queue
     */
    if (!vec.empty())
      return this->vec.back();
    return "";
  }
  void print() {
    /*
     * TODO: Print our Queue
     *
     * Print every element in `vec` following
     * a FIFO principle
     */
    for (auto &x : this->vec)
      std::cout << x;
    std::cout << std::endl;
  }

private:
  std::vector<std::string> vec;
};

int main() {
  size_t maxPoints = 60;
  size_t totalPoints = 0;

  std::vector<std::string> log{};

  // Test case 1
  Queue q1;
  std::string q1_log{"Test Case #1\n"};
  q1.add("HelloWorld");
  if (q1.front() == "Hell") {
    totalPoints += 10;
    q1_log += "front() - 10/10\n";
  } else
    q1_log += "front() - 0/10\n";
  if (q1.back() == "ld") {
    totalPoints += 10;
    q1_log += "back() - 10/10\n";
  } else
    q1_log += "back() - 0/10\n";
  q1_log += "=================\n";
  log.push_back(q1_log);

  // Test case 2
  Queue q2;
  std::string q2_log{"Test Case #2\n"};
  q2.add("1234567890");
  if (q2.front() == "1234") {
    totalPoints += 10;
    q2_log += "front() - 10/10\n";
  } else
    q2_log += "front() - 0/10\n";
  if (q2.back() == "90") {
    totalPoints += 10;
    q2_log += "back() - 10/10\n";
  } else
    q2_log += "back() - 0/10\n";
  q2_log += "=================\n";
  log.push_back(q2_log);

  // Test case 3
  Queue q3;
  std::string q3_log{"Test Case #3\n"};
  q3.add("abcd");
  if (q3.front() == "abcd") {
    totalPoints += 10;
    q3_log += "front() - 10/10\n";
  } else
    q3_log += "front() - 0/10\n";
  if (q3.back() == "abcd") {
    totalPoints += 10;
    q3_log += "back() - 10/10\n";
  } else
    q3_log += "back() - 0/10\n";
  q3_log += "=================\n";
  log.push_back(q3_log);

  for (auto &x : log)
    std::cout << x << std::endl;

  std::cout << "Total score: " << totalPoints << "/" << maxPoints << std::endl;

  std::cout << "\nTested Inputs:\n";
  q1.print();
  q2.print();
  q3.print();
}
