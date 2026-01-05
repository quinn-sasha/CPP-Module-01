#include <iostream>
#include "Zombie.hpp"

int main() {
  randomChump("In stack memory");

  Zombie* zombie = newZombie("In heap memory");
  zombie->announce();
  delete zombie;

  std::cout << "main() ends" << std::endl;
}
