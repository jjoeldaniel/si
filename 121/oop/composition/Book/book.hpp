#pragma once
#include <string>

class Book {
public:
  Book(std::string name, std::string author);

  std::string getName();
  std::string getAuthor();
  void print();

private:
  std::string _name;
  std::string _author;
};
