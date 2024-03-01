#include "pokemon.h"
#include <map>
#include <vector>

enum Stoplights { Green, Yellow, Red };
std::map<Stoplights, std::string> StoplightsMap;

Pokemon::Pokemon(std::string name, PokemonType type, bool hasTrainer) {
  this->name_ = name;
  this->type_ = type;
  this->hasTrainer_ = hasTrainer;
}

void Pokemon::print() {
  std::cout << "-- Pokemon -- \n";
  std::cout << "Name: " << this->name_ << std::endl;
  std::cout << "Type: " << this->type_ << std::endl;
  std::cout << "Has Trainer: " << this->hasTrainer_ << std::endl;
}

void shouldIGo(Stoplights light) {
  StoplightsMap[Green] = "Green";
  StoplightsMap[Yellow] = "Yellow";
  StoplightsMap[Red] = "Red";
  if (light == 0) {
    std::cout << "It's " << StoplightsMap[light] << "! Goo!!\n";
  } else if (light == 1) {
    std::cout << "its " << StoplightsMap[light] << "! Goo!!\n";
  } else {
    std::cout << "its " << StoplightsMap[light] << "! Goo!!\n";
  }
}

int main() {

  Pokemon charmander{"charmander", Fire, true};
  Pokemon squirtle{"squirtle", Water, false};

  std::vector pokemon{charmander, squirtle};
  for (Pokemon x : pokemon)
    x.print();

  shouldIGo(Green);
  shouldIGo(Yellow);
  shouldIGo(Red);

  return 0;
}
