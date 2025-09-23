#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>

class Human {
public:
  // Constructor: Creates a human with a name, age, and a NEW unique ID.
  Human(std::string name, int age);

  // TODO 1: Implement the Copy Constructor
  // A copied Human should have the same name and age, but a *new, unique ID*.
  Human(const Human &other);

  // --- Function Overloading Section ---

  // TODO 2: Implement the overloaded 'interact' functions below.
  // Each function has the same name but different parameters.

  // A general interaction.
  void interact();

  // Interaction with another Human.
  void interact(const Human &other);

  // Interaction with an object.
  void interact(std::string item);

  // Saying something a specific number of times.
  void interact(std::string phrase, int times);

  // --- End of Student TODOs ---

  // Provided for the exercise, not a student task.
  Human &operator=(const Human &other);
  std::string get_name() const;
  int get_age() const;
  int get_id() const;

private:
  std::string _name;
  int _age;
  int _id;

  static int _next_id;
};

// Provided for easy printing.
std::ostream &operator<<(std::ostream &os, const Human &h);

#endif // HUMAN_H
