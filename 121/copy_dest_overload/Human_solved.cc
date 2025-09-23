#include "Human.h"

// Initialize the static ID counter.
int Human::_next_id = 1;

// Constructor
Human::Human(std::string name, int age) : _name(name), _age(age) {
  _id = _next_id++; // Assign unique ID
  std::cout << "CONSTRUCTOR: " << _name << " created with ID " << _id << "."
            << std::endl;
}

// --- STUDENT IMPLEMENTATION STARTS HERE ---

// TODO 1: Implement the Copy Constructor
Human::Human(const Human &other) {
  // 1. Copy the name and age from the 'other' object.
  // 2. Assign a *new* unique ID using the _next_id counter.
  // 3. Increment _next_id for the next Human to be created.
  std::cout << "COPY CONSTRUCTOR: Making a copy of " << other._name << "."
            << std::endl;
  this->_name = other.get_name();
  this->_id = _next_id++;
  _next_id++;
}

// TODO 2: Implement the overloaded 'interact' functions

// This version takes no arguments.
void Human::interact() {
  // Print a simple message, like "[Name] waves."
  // Your code here
  std::cout << _name << " waves\n";
}

// This version takes another Human object.
void Human::interact(const Human &other) {
  // Print a message where this Human greets the other Human by name.
  // e.g., "Alice (ID: 1) says hello to Bob (ID: 2)!"
  // Your code here
  std::cout << _name << " (ID: " << _id << ") says hello to "
            << other.get_name() << " (ID: " << other.get_id() << ")!\n";
}

// This version takes a std::string.
void Human::interact(std::string item) {
  // Print a message where this Human interacts with the item.
  // e.g., "Alice (ID: 1) picks up the book."
  // Your code here
  std::cout << _name << " (ID: " << _id << ") picks up the " << item << "\n";
}

// This version takes a string and an integer.
void Human::interact(std::string phrase, int times) {
  // Print the phrase the specified number of times.
  // e.g., if phrase is "Hello" and times is 3, print:
  // Alice says: Hello
  // Alice says: Hello
  // Alice says: Hello
  // Your code here
  for (int i = 0; i < times; i++) {
    std::cout << _name << " says: " << phrase << std::endl;
  }
}

// --- STUDENT IMPLEMENTATION ENDS HERE ---

// Provided functions (not part of the student's task)
std::string Human::get_name() const { return _name; }
int Human::get_age() const { return _age; }
int Human::get_id() const { return _id; }

Human &Human::operator=(const Human &other) {
  std::cout << "COPY ASSIGNMENT: " << _name << " is becoming like "
            << other._name << "." << std::endl;
  if (this != &other) {
    _name = other._name;
    _age = other._age;
  }
  return *this;
}

std::ostream &operator<<(std::ostream &os, const Human &h) {
  os << "Human(ID: " << h.get_id() << ", Name: " << h.get_name()
     << ", Age: " << h.get_age() << ")";
  return os;
}
