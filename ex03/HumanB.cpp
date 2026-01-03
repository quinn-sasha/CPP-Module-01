#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

HumanB::HumanB(std::string name) : name(name), weapon(0) {}

void HumanB::setWeapon(Weapon& weapon) { this->weapon = &weapon; }

void HumanB::attack() const {
  if (!this->weapon) {
    std::cout << name << " doesn't have a weapon" << std::endl;
    return;
  }
  std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
