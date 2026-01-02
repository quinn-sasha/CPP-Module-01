#include "Zombie.hpp"
#include <string>

Zombie* newZombie(std::string name) {
  Zombie* result = new Zombie(name);
  return result;
}
