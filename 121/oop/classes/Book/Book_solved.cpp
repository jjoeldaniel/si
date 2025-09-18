#include "Book.h"
#include <iostream>

// Default constructor
Book::Book()
    : title_("Book Title"), author_("Book Author"), year_(1970),
      ISBN_("123456789") {}

// Parameterized constructor
Book::Book(const std::string &title, const std::string &author, int year,
           const std::string &ISBN)
    : title_(title), author_(author), year_(year), ISBN_(ISBN) {}

// Copy constructor
Book::Book(const Book &other)
    : title_(other.getTitle()), author_(other.getAuthor()), year_(other.getYear()),
      ISBN_(other.getISBN()) {}

// Getter methods
std::string Book::getTitle() const { return title_; }

std::string Book::getAuthor() const { return author_; }

int Book::getYear() const { return year_; }

std::string Book::getISBN() const { return ISBN_; }

// Setter methods
void Book::setTitle(const std::string &title) { this->title_ = title; }

void Book::setAuthor(const std::string &author) { this->author_ = author; }

void Book::setYear(int year) { this->year_ = year; }

void Book::setISBN(const std::string &ISBN) { this->ISBN_ = ISBN; }

// Method to display book information
void Book::displayBook() const {
  std::cout << "Title: " << title_ << std::endl;
  std::cout << "Author: " << author_ << std::endl;
  std::cout << "Year: " << year_ << std::endl;
  std::cout << "ISBN: " << ISBN_ << std::endl;
  std::cout << std::endl;
}
