#include "Book.h"
#include <iostream>

// Default constructor
Book::Book()
    : title("Book Title"), author("Book Author"), year(1970),
      ISBN("123456789") {}

// Parameterized constructor
Book::Book(const std::string &title, const std::string &author, int year,
           const std::string &ISBN)
    : title(title), author(author), year(year), ISBN(ISBN) {}

// Copy constructor
Book::Book(const Book &other)
    : title(other.title), author(other.author), year(other.year),
      ISBN(other.ISBN) {}

// Getter methods
std::string Book::getTitle() const { return title; }

std::string Book::getAuthor() const { return author; }

int Book::getYear() const { return year; }

std::string Book::getISBN() const { return ISBN; }

// Setter methods
void Book::setTitle(const std::string &title) { this->title = title; }

void Book::setAuthor(const std::string &author) { this->author = author; }

void Book::setYear(int year) { this->year = year; }

void Book::setISBN(const std::string &ISBN) { this->ISBN = ISBN; }

// Method to display book information
void Book::displayBook() const {
  std::cout << "Title: " << title << std::endl;
  std::cout << "Author: " << author << std::endl;
  std::cout << "Year: " << year << std::endl;
  std::cout << "ISBN: " << ISBN << std::endl;
  std::cout << std::endl;
}
