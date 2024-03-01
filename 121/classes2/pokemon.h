#ifndef POKEMON
#define POKEMON

#include <iostream>
#include <string>

enum PokemonType { Water, Fire, Earth };

class Pokemon {
public:
  Pokemon() { this->hasTrainer_ = false; }
  Pokemon(std::string name, PokemonType type, bool hasTrainer);

  std::string GetName() { return this->name_; }
  void SetName(std::string name) { this->name_ = name; }

  PokemonType GetType() { return this->type_; }
  void SetType(PokemonType type) { this->type_ = type; }

  bool SetHasTrainer() { return this->hasTrainer_; }
  void GetHasTrainer(bool hasTrainer) { this->hasTrainer_ = hasTrainer; }

  void print();

private:
  std::string name_;
  PokemonType type_;
  bool hasTrainer_;
};

#endif
