#include "bookshelf.hpp"
#include "book.hpp"

Bookshelf::Bookshelf(){};
void Bookshelf::addBook(Book book) { _vec.push_back(book); }
void Bookshelf::print() {
  for (Book book : _vec) {
    book.print();
  }
}
