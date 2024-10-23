#include <iostream>
#include <vector>

// Function to count how many days have a rain probability >= 50%
// Do NOT include invalid numbers (n < 0 or n > 100)
int countRainyDays(const std::vector<int> &rainProbabilities) {
  int res = 0;

  /*for (int i = 0;  i < rainProbabilities.size(); i++) {*/
  /*  int a = rainProbabilities.at(i);*/
  /*}*/

  for (int a : rainProbabilities) {
    if (a >= 50 && a <= 100) {
      res++;
    }
  }

  return res;
}

// Function to calculate the average rain probability over the week
// Do NOT include invalid numbers (n < 0 or n > 100)
double
calculateAverageRainProbability(const std::vector<int> &rainProbabilities) {
  // TODO: Implement your code here
  return 0.0;
}

// Bonus: Function to find the day with the highest rain probability
// Do NOT include invalid numbers (n < 0 or n > 100)
int findDayWithHighestProbability(const std::vector<int> &rainProbabilities) {
  // TODO: Implement your code here
  return 0;
}

int main() {

  // Vector of rain probabilities
  // Each integer represents the likelyhood of rain on a given day
  //
  // ex. 25 is a 25% chance on the i+1'th day
  std::vector<int> rainProbabilities{50, 75, 38, -5, 25, 98, 100, 80, 110};

  // Call function to count rainy days (rain probability >= 50%)
  int rainyDays = countRainyDays(rainProbabilities);
  std::cout << "Days with rain probability >= 50%: " << rainyDays << std::endl;

  // Call function to calculate average rain probability
  double averageRain = calculateAverageRainProbability(rainProbabilities);
  std::cout << "Average rain probability: " << averageRain << "%" << std::endl;

  // Bonus: Call function to find the day with the highest rain probability
  int highestRainDay = findDayWithHighestProbability(rainProbabilities);
  std::cout << "Day with the highest chance of rain: Day " << highestRainDay
            << std::endl;

  return 0;
}
