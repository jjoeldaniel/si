#include "Pet.h"
#include <iostream>

int main() {
  std::string name;
  std::cout << "What is your new pet's name? ";
  std::cin >> name;

  Pet my_pet(name);
  char choice = ' ';

  while (choice != 'q') {
    my_pet.PrintStatus();
    std::cout << "What do you want to do?\n"
              << "(f)eed, (p)lay, (s)leep, (q)uit: ";
    std::cin >> choice;

    if (choice == 'f') {
      my_pet.Feed();
    } else if (choice == 'p') {
      my_pet.Play();
    } else if (choice == 's') {
      my_pet.Sleep();
    }
    std::cout << std::endl;
  }

  std::cout << "Goodbye!" << std::endl;
  return 0;
}
