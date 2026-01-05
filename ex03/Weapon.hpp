#ifndef EX03_WEAPON_HPP_
#define EX03_WEAPON_HPP_

#include <string>

class Weapon {
  std::string type;

 public:
  Weapon(std::string type);

  const std::string& getType() const;
  void setType(std::string type);
};

#endif  // EX03_WEAPON_HPP_
