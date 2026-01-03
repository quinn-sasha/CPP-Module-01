#ifndef EX03_HUMANA_HPP_
#define EX03_HUMANA_HPP_

#include "Weapon.hpp"
#include <string>

class HumanA {
  std::string name;
  Weapon& weapon;

public:
  HumanA(std::string name, Weapon& weapon);

  void attack() const;
};

#endif // !EX03_HUMANA_HPP_
