#ifndef BOOK_H
#define BOOK_H

#include <string>

/**
 * @brief The Book class represents a book in a library.
 */
class Book {
private:
  std::string title_;  /**< The title of the book */
  std::string author_; /**< The author of the book */
  int year_;           /**< The year of publication */
  std::string ISBN_;   /**< The ISBN of the book */

public:
  /**
   * @brief Default constructor for the Book class.
   * Initializes the book with empty strings and year 0.
   */
  Book();

  /**
   * @brief Parameterized constructor for the Book class.
   * @param title The title of the book
   * @param author The author of the book
   * @param year The year of publication
   * @param ISBN The ISBN of the book
   */
  Book(const std::string &title, const std::string &author, int year,
       const std::string &ISBN);

  /**
   * @brief Copy constructor for the Book class.
   * @param other Another Book object to copy from
   */
  Book(const Book &other);

  /**
   * @brief Getter method for retrieving the title of the book.
   * @return The title of the book
   */
  std::string getTitle() const;

  /**
   * @brief Getter method for retrieving the author of the book.
   * @return The author of the book
   */
  std::string getAuthor() const;

  /**
   * @brief Getter method for retrieving the year of publication of the book.
   * @return The year of publication of the book
   */
  int getYear() const;

  /**
   * @brief Getter method for retrieving the ISBN of the book.
   * @return The ISBN of the book
   */
  std::string getISBN() const;

  /**
   * @brief Setter method for updating the title of the book.
   * @param title The new title of the book
   */
  void setTitle(const std::string &title);

  /**
   * @brief Setter method for updating the author of the book.
   * @param author The new author of the book
   */
  void setAuthor(const std::string &author);

  /**
   * @brief Setter method for updating the year of publication of the book.
   * @param year The new year of publication of the book
   */
  void setYear(int year);

  /**
   * @brief Setter method for updating the ISBN of the book.
   * @param ISBN The new ISBN of the book
   */
  void setISBN(const std::string &ISBN);

  /**
   * @brief Method to display the book information.
   * Prints the title, author, year of publication, and ISBN of the book.
   */
  void displayBook() const;
};

#endif // BOOK_H
