#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {
  std::cout << "Destructor called: name: " << name << std::endl;
}

void Zombie::announce() const {
  std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
