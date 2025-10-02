#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <utility>

/**
 * @brief Prints the contents of a map from string to int.
 *
 * This is a helper function provided for you. It demonstrates how to
 * iterate over a map and print its key-value pairs.
 * It uses a range-based for loop with structured bindings, a modern C++ feature.
 *
 * @param data The map to be printed.
 */
void printScores(const std::map<std::string, int>& data) {
    std::cout << "--- SCORES ---" << std::endl;
    for (const auto& [name, score] : data) {
        std::cout << name << " has " << score << std::endl;
    }
    std::cout << "--------------" << std::endl;
}


/**
 * @brief PROBLEM 1: Word Frequency Counter
 *
 * Maps are excellent for counting how many times each item appears in a list.
 *
 * @param words A vector of strings.
 * @return A std::map<std::string, int> where each key is a unique word from the
 * input vector and its corresponding value is the number of times
 * that word appeared in the vector.
 */
std::map<std::string, int> countWordFrequency(const std::vector<std::string>& words) {
    // TODO:
    // 1. Create an empty map to store word counts. The key will be the word (string)
    //    and the value will be its frequency (int).
    std::map<std::string, int> frequencyMap;

    // 2. Iterate through the `words` vector. For each word:
    //    - Use the word as a key to access the map.
    //    - The `[]` operator is very useful here. If the key doesn't exist, it
    //      creates a new entry with a default-constructed value (0 for int).
    //    - Increment the value associated with that key.
    for (const std::string& word : words) {
        frequencyMap[word]++;
    }

    // 3. Return the populated map.
    return frequencyMap;
}

/**
 * @brief PROBLEM 2: Tallying Player Scores
 *
 * Use a map to aggregate scores for players over several rounds.
 *
 * @param gameEvents A vector of pairs. Each pair contains a player's name
 * and the points they scored in an event (can be negative).
 * @return A std::map<std::string, int> where each key is a unique player's name
 * and the value is their total score after all events.
 */
std::map<std::string, int> tallyPlayerScores(const std::vector<std::pair<std::string, int>>& gameEvents) {
    // TODO:
    // 1. Create an empty map to store the total score for each player.
    std::map<std::string, int> playerScores;

    // 2. Iterate through the `gameEvents` vector. For each pair (event):
    //    - Get the player's name and the score from the event.
    //    - Use the player's name as a key and add the event's score to their
    //      current total in the map.
    //    - The `[]` operator is again perfect for this: `map[key] += value;`
    for (const auto& event : gameEvents) {
        std::string playerName = event.first;
        int scoreChange = event.second;
        playerScores[playerName] += scoreChange;
    }

    // 3. Return the map with the final scores.
    return playerScores;
}


int main() {
    std::cout << "======= Exercise: std::map =======" << std::endl;

    // --- Test for Problem 1: Word Frequency ---
    std::cout << "\n--- Testing Problem 1: Word Frequency ---" << std::endl;
    std::vector<std::string> words = {"apple", "banana", "apple", "orange", "banana", "apple"};
    std::map<std::string, int> wordCounts = countWordFrequency(words);
    std::cout << "Counting words: apple, banana, apple, orange, banana, apple" << std::endl;
    printScores(wordCounts); // Using our helper function to print the map

    // --- Test for Problem 2: Tallying Scores ---
    std::cout << "\n--- Testing Problem 2: Tallying Player Scores ---" << std::endl;
    std::vector<std::pair<std::string, int>> events = {
        {"Emily", 10},
        {"Kevin", 15},
        {"Emily", 5},
        {"Taylor", 20},
        {"Kevin", -5}
    };
    std::map<std::string, int> finalScores = tallyPlayerScores(events);
    std::cout << "Tallying scores from game events..." << std::endl;
    printScores(finalScores);

    std::cout << "\n======= Exercises Complete =======" << std::endl;

    return 0;
}

/*
------------- EXPECTED OUTPUT -------------

======= Exercise: std::map =======

--- Testing Problem 1: Word Frequency ---
Counting words: apple, banana, apple, orange, banana, apple
--- SCORES ---
apple has 3
banana has 2
orange has 1
--------------

--- Testing Problem 2: Tallying Player Scores ---
Tallying scores from game events...
--- SCORES ---
Emily has 15
Kevin has 10
Taylor has 20
--------------

======= Exercises Complete =======

*/
