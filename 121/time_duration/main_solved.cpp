#include <iostream>
#include <stdexcept> // Required for std::invalid_argument

class TimeDuration {
private:
  int minutes_;
  int seconds_;

public:
  TimeDuration(int m, int s) {
    // Check for invalid inputs
    if (m < 0 || s < 0 || s > 59) {
      throw std::invalid_argument(
          "Invalid time: Minutes must be >=0, Seconds must be 0-59.");
    }
    minutes_ = m;
    seconds_ = s;
  }

  int GetMinutes() const { return minutes_; }
  int GetSeconds() const { return seconds_; }

  TimeDuration operator+(const TimeDuration &other) {
    int total_seconds = seconds_ + other.seconds_;
    int total_minutes = minutes_ + other.minutes_;

    // Handle overflow: if seconds >= 60, add to minutes
    if (total_seconds >= 60) {
      total_minutes += 1;
      total_seconds -= 60;
    }

    return TimeDuration(total_minutes, total_seconds);
  }
};

// ==========================================
// DO NOT MODIFY THE MAIN FUNCTION BELOW
// ==========================================
// This function tests your code and assigns a score.
int main() {
  int score = 0;
  int total_score = 30;
  std::cout << "--- Starting TimeDuration Tests ---\n";

  // TEST 1: Valid Construction (5 pts)
  try {
    TimeDuration t1(10, 30);
    if (t1.GetMinutes() == 10 && t1.GetSeconds() == 30) {
      std::cout << "[PASS] Valid Construction\n";
      score += 5;
    } else {
      std::cout << "[FAIL] Valid Construction: Expected 10m 30s\n";
    }
  } catch (...) {
    std::cout << "[FAIL] Valid Construction: Unexpected exception thrown\n";
  }

  // TEST 2: Exception on Negative Minutes (5 pts)
  try {
    TimeDuration t2(-5, 10);
    std::cout << "[FAIL] Negative Minutes: Exception NOT thrown\n";
  } catch (const std::invalid_argument &e) {
    std::cout << "[PASS] Negative Minutes: Exception caught (" << e.what()
              << ")\n";
    score += 5;
  } catch (...) {
    std::cout << "[FAIL] Negative Minutes: Wrong exception type thrown\n";
  }

  // TEST 3: Exception on Invalid Seconds (5 pts)
  try {
    TimeDuration t3(5, 75); // 75 seconds is invalid
    std::cout << "[FAIL] Invalid Seconds: Exception NOT thrown\n";
  } catch (const std::invalid_argument &e) {
    std::cout << "[PASS] Invalid Seconds: Exception caught (" << e.what()
              << ")\n";
    score += 5;
  } catch (...) {
    std::cout << "[FAIL] Invalid Seconds: Wrong exception type thrown\n";
  }

  // TEST 4: Simple Addition (5 pts)
  try {
    TimeDuration tA(1, 10);
    TimeDuration tB(2, 20);
    TimeDuration tC = tA + tB;
    if (tC.GetMinutes() == 3 && tC.GetSeconds() == 30) {
      std::cout << "[PASS] Simple Addition\n";
      score += 5;
    } else {
      std::cout << "[FAIL] Simple Addition: Expected 3m 30s, got "
                << tC.GetMinutes() << "m " << tC.GetSeconds() << "s\n";
    }
  } catch (...) {
    std::cout << "[FAIL] Simple Addition: Unexpected exception\n";
  }

  // TEST 5: Addition with Overflow (10 pts)
  try {
    TimeDuration tX(0, 45);
    TimeDuration tY(0, 25); // 45 + 25 = 70s -> 1m 10s
    TimeDuration tZ = tX + tY;
    if (tZ.GetMinutes() == 1 && tZ.GetSeconds() == 10) {
      std::cout << "[PASS] Overflow Addition\n";
      score += 10;
    } else {
      std::cout << "[FAIL] Overflow Addition: Expected 1m 10s, got "
                << tZ.GetMinutes() << "m " << tZ.GetSeconds() << "s\n";
    }
  } catch (const std::invalid_argument &e) {
    std::cout
        << "[FAIL] Overflow Addition: Your logic likely passed an invalid "
           "value (like 70) "
           "to the constructor before fixing the overflow. Constructor threw: "
        << e.what() << "\n";
  } catch (...) {
    std::cout << "[FAIL] Overflow Addition: Unexpected exception\n";
  }

  std::cout << "\n------------------------------------------------\n";
  std::cout << "FINAL SCORE: " << score << " / " << total_score << "\n";
  if (score == total_score)
    std::cout
        << "Great job! You've mastered basics of Exceptions and Overloading.\n";
  else
    std::cout << "Keep practicing! Check the error messages above.\n";
  std::cout << "------------------------------------------------\n";

  return 0;
}
