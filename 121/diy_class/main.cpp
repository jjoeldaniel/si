#include "Book.h"
#include <iostream>

void testBook() {
  // Test default constructor
  Book book1;
  std::cout << "Book 1: " << book1.getTitle() << ", " << book1.getAuthor()
            << ", " << book1.getYear() << ", " << book1.getISBN() << std::endl;

  // Test parameterized constructor
  Book book2("The Great Gatsby", "F. Scott Fitzgerald", 1925, "9780743273565");
  std::cout << "Book 2: " << book2.getTitle() << ", " << book2.getAuthor()
            << ", " << book2.getYear() << ", " << book2.getISBN() << std::endl;

  // Test copy constructor
  Book book3 = book2;
  std::cout << "Book 3 (Copy of Book 2): " << book3.getTitle() << ", "
            << book3.getAuthor() << ", " << book3.getYear() << ", "
            << book3.getISBN() << std::endl;

  // Test setters
  book1.setTitle("To Kill a Mockingbird");
  book1.setAuthor("Harper Lee");
  book1.setYear(1960);
  book1.setISBN("9780061120084");
  std::cout << "Updated Book 1: " << book1.getTitle() << ", "
            << book1.getAuthor() << ", " << book1.getYear() << ", "
            << book1.getISBN() << std::endl;

  // Test display method
  book1.displayBook();
  book2.displayBook();
  book3.displayBook();
}

int main() {
  testBook();
  return 0;
}
