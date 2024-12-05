#include <iostream>
#include <string>
#include <vector>

// Class Definition
class Student {
public:
  // TODO 1: Implement the Default Constructor
  // Hint: Initialize `name` to "Unknown" and `scores` to an empty vector.
  Student() {
    _name = "Unknown";
    _scores = {};
  }

  // TODO 2: Implement the Parameterized Constructor
  // Hint: Initialize `name` and `scores` using the provided arguments.
  Student(const std::string &studentName,
          const std::vector<int> &studentScores) {
    _name = studentName;
    _scores = studentScores;
  }

  // TODO 3: Implement a Member Function to Calculate the Total Score
  // Hint: Return 0.0 if the `scores` vector is empty. Otherwise, compute the
  // average.
  int calculateTotalScore() const {
    int max = 0;

    for (const int &num : _scores) {
      max += num;
    }
   
    return max;
  }

  // TODO 4: Implement a Member Function to Calculate the Max Score
  // Hint: Return 0.0 if the `scores` vector is empty. Otherwise, compute the
  // max. Assume each assignment has a maximum of 100 points.
  int calculateMaxScore() const {
    return 100 * _scores.size();
  }

  // TODO 5: Implement a Member Function to Determine the Letter Grade
  // Hint: Use the average score, max score, and standard grading rules (A for
  // 90+, B for 80+, etc.).
  std::string calculateLetterGrade() const {
    int totalScore = calculateTotalScore();
    int maxScore = calculateMaxScore();

    double percent = totalScore / double(maxScore);

    if (percent >= 0.9) {
      return "A";
    }
    else if (percent >= 0.8) {
      return "B";
    }
    else if (percent >= 0.7) {
      return "C";
    }
    else if (percent >= 0.6) {
      return "D";
    } else {
      return "F";
    }
  }

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
  void display() {
    std::cout << "Name: " << _name << "\n"; 
    std::cout << "Scores: ";
    for (const int &score : _scores) {
      std::cout << score << " ";
    }
    std::cout << "\n";
    std::cout << "Total Score: " << calculateTotalScore() << "\n"; 
    std::cout << "Max Score: " << calculateMaxScore() << "\n"; 
    std::cout << "Letter Grade: " << calculateLetterGrade() << "\n";
    std::cout << "\n";
  }

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
