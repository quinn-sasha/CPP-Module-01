#include "Zombie.hpp"

int main() {
  Zombie* group1 = zombieHorde(3, "Bomb Zombie");
  for (int i = 0; i < 3; i++) {
    group1[i].announce();
  }
  delete[] group1;

  Zombie* group2 = zombieHorde(10, "Running Zombie");
  for (int i = 0; i < 10; i++) {
    group2[i].announce();
  }
  delete[] group2;
}
