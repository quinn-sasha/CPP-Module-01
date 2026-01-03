#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : name(name) {}

Zombie::Zombie() : name("unknown") {}

Zombie::~Zombie() {
  std::cout << "Destructor called: name: " << name << std::endl;
}

void Zombie::set_name(std::string name) { this->name = name; }

void Zombie::announce() const {
  std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
