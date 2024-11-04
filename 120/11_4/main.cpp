#include <iostream>
#include <vector>

bool checkWinner(std::vector<std::vector<char>> &board) {
  // TODO: Implement the function checkWinner to check for if someone
  // has won the game vertically or horizontally.
  // If someone has won, return `true`, otherwise return false;

  return true;
}

void printBoard(std::vector<std::vector<char>> &board) {
  // TODO: Implement the function printBoard to take in a gameboard
  // and print it out when called in main()
  //
  // ex:
  //
  // [X O _]
  // [X _ O]
  // [X _ O]
  
}


int main() {
  std::cout << "Is there a winnner on the following boards?\n\n";

  // Test Cases
  std::vector<std::vector<char>> board1 = {
    {'X', 'O', '_'}, 
    {'X', 'O', '_'}, 
    {'X', '_', 'O'}};
  std::cout << "Test Case 1: " << (checkWinner(board1) ? "true" : "false") << "\n";
  printBoard(board1);

  std::vector<std::vector<char>> board2 = {
    {'X', 'O', 'X'}, 
    {'X', 'X', 'O'}, 
    {'O', 'X', 'O'}};
  std::cout << "Test Case 2: " << (checkWinner(board2) ? "true" : "false") << "\n";
  printBoard(board2);

  std::vector<std::vector<char>> board3 = {
    {'O', 'X', 'X'}, 
    {'X', 'O', '_'}, 
    {'O', 'X', 'O'}};
  std::cout << "Test Case 3: " << (checkWinner(board3) ? "true" : "false") << "\n";
  printBoard(board3);

  return 0;
}
