#include <iostream>
#include <string>
#include <vector>

// Class Definition
class Student {
public:
  // TODO 1: Implement the Default Constructor
  // Hint: Initialize `name` to "Unknown" and `scores` to an empty vector.

  // TODO 2: Implement the Parameterized Constructor
  // Hint: Initialize `name` and `scores` using the provided arguments.

  // TODO 3: Implement a Member Function to Calculate the Total Score
  // Hint: Return 0.0 if the `scores` vector is empty. Otherwise, compute the
  // total.

  // TODO 4: Implement a Member Function to Calculate the Max Score
  // Hint: Return 0.0 if the `scores` vector is empty. Otherwise, compute the
  // max. Assume each assignment has a maximum of 100 points.

  // TODO 5: Implement a Member Function to Determine the Letter Grade
  // Hint: Use the average score, max score, and standard grading rules (A for
  // 90+, B for 80+, etc.).

  // TODO 6: Implement a Member Function to Display Student Details
  // Hint: Print the name, scores, average score, and letter grade.
  //
  // Example output:
  //
  // Name: Alice
  // Scores: 85 85 90 88 
  // Total Score: 348
  // Max Score: 400
  // Letter Grade: B
  //
  void display() {}
private:
  std::string _name;
  std::vector<int> _scores;
};

int main() {
  // Test Case 1: Default Constructor
  Student defaultStudent;
  std::cout << "Test Case 1: Default Constructor\n";
  defaultStudent.display();

  // Test Case 2: Parameterized Constructor
  std::vector<int> scoresAlice = {95, 85, 90, 88};
  Student paramStudent("Alice", scoresAlice);
  std::cout << "Test Case 2: Parameterized Constructor\n";
  paramStudent.display();

  // Test Case 3: Another Parameterized Constructor
  std::vector<int> scoresBob = {72, 68, 75, 70};
  Student anotherStudent("Bob", scoresBob);
  std::cout << "Test Case 3: Another Parameterized Constructor\n";
  anotherStudent.display();

  // Test Case 4: Failing Grades
  std::vector<int> scoresFail = {50, 55, 58, 52};
  Student failStudent("Charlie", scoresFail);
  std::cout << "Test Case 4: Failing Grades\n";
  failStudent.display();

  return 0;
}
