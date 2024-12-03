#include <iostream>
#include <vector>
#include <string>

class Book {
public:
    // Default constructor
    Book() {
        // TODO: Initialize title, author, and year to default values (e.g., empty strings and 0)
    }

    // Parameterized constructor
    Book(const std::string& title, const std::string& author, int year) {
        // TODO: Initialize title, author, and year with the given arguments
    }

    // Getter functions
    std::string getTitle() const {
        // TODO: Return the title of the book
        return title_;
    }

    std::string getAuthor() const {
        // TODO: Return the author of the book
        return "";
    }

    int getYear() const {
        // TODO: Return the year of publication of the book
        return 0;
    }

    // Display book information
    void displayBookInfo() const {
        // TODO: Print the book's title, author, and year to the console in a formatted manner
    }

private:
    std::string title_;
    std::string author_;
    int year_;
};

int main() {

  // TOOD: Create the following books:
  //
  // Title: "The Giver"
  // Author: "Lois Lawry"
  // Year: 1993
  //
  // Title: "The Hobbit"
  // Author: "J. R. R. Tolkien"
  // Year: 1937
  //
  // Title: "The Giver"
  // Author: "Lois Lawry"
  // Year: 1993

  Book book1{"the giver", "louis lawry", 1993};
  Book book2;
  Book book3;

  // Append each book to the vector
  std::vector<Book> books;

  // Iterate through `books` and call displayBookInfo()
 
  return 0;
}
