#ifndef PET_H
#define PET_H

#include <string>

class Pet {
public:
  // Non-default constructor: Initializes a new Pet with a name and
  // sets hunger, happiness, and energy to starting values (e.g., 50).
  Pet(const std::string &name);

  // === MEMBER FUNCTIONS (BEHAVIORS) ===

  // Feed() decreases hunger but uses up some energy.
  void Feed();

  // Play() increases happiness and energy but also increases hunger.
  void Play();

  // Sleep() restores energy.
  void Sleep();

  // PrintStatus() displays the pet's current state to the console.
  // This function doesn't change the pet, so it should be const!
  void PrintStatus() const;

  // === ACCESSORS (GETTERS) ===
  std::string GetName() const;
  int GetHunger() const;
  int GetHappiness() const;
  int GetEnergy() const;

private:
  std::string name_;
  int hunger_;
  int happiness_;
  int energy_;
};

#endif // PET_H
