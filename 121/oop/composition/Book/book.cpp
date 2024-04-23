#include "book.hpp"
#include <iostream>
#include <string>

Book::Book(std::string name, std::string author)
    : _name(name), _author(author){};

std::string Book::getName() { return this->_name; }
std::string Book::getAuthor() { return this->_author; }
void Book::print() {
  std::cout << "Book: " << this->_name << " by " << this->_author << std::endl;
}
