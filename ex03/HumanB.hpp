#ifndef EX03_HUMANB_HPP_
#define EX03_HUMANB_HPP_

#include "Weapon.hpp"
#include <string>

class HumanB {
  std::string name;
  Weapon* weapon;

public:
  HumanB(std::string name);

  void setWeapon(Weapon& weapon);
  void attack() const;
};

#endif // !EX03_HUMANB_HPP_
