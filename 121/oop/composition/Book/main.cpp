#include "book.hpp"
#include "bookshelf.hpp"

int main() {
  Bookshelf shelf;

  shelf.addBook(Book("The Great Gatsby", "F. Scott Fitzgerald"));
  shelf.addBook(Book("To Kill a Mockingbird", "Harper Lee"));
  shelf.addBook(Book("1984", "George Orwell"));
  shelf.addBook(Book("Pride and Prejudice", "Jane Austen"));
  shelf.addBook(Book("The Catcher in the Rye", "J.D. Salinger"));
  shelf.print();
}
