#pragma once
#include "book.hpp"

class Bookshelf {
public:
  Bookshelf();
  void addBook(Book book);
  void print();

private:
  std::vector<Book> _vec;
};
