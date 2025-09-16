#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character {
public:
  // Constructor to initialize a new character.
  Character(const std::string &name, int health, int attack_power);

  // === MUTATOR (NON-CONST) ===
  // This function MODIFIES the character's health.
  void TakeDamage(int damage);

  // === ACCESSORS (CONST) ===
  // These functions only READ data, they don't change it.
  // Therefore, they MUST be marked as const.
  void DisplayStats() const;
  std::string GetName() const;
  int GetHealth() const;
  int GetAttackPower() const;

private:
  std::string name_;
  int health_;
  int attack_power_;
};

#endif // CHARACTER_H
