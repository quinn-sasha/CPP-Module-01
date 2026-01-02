#include "Zombie.hpp"
#include <iostream>

int main() {
  randomChump("In stack memory");

  Zombie* zombie = newZombie("In heap memory");
  zombie->announce();
  delete zombie;

  std::cout << "main() ends" << std::endl;
}
