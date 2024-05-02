#include "book.hpp"
#include <iostream>
#include <string>

Book::Book(std::string name, std::string author)
    : _name(name), _author(author) {}

std::string Book::getName() { return _name; }
std::string Book::getAuthor() { return _author; }

// Expected Output: "Book: <name> by <author>"
void Book::print() {
  std::cout << "Book: " << _name << " by " << getAuthor() << std::endl;
}
