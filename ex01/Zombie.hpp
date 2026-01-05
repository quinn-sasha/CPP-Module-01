#ifndef EX01_ZOMBIE_HPP_
#define EX01_ZOMBIE_HPP_

#include <string>

class Zombie {
  std::string name;

 public:
  Zombie(std::string name);
  Zombie();
  ~Zombie();

  void set_name(std::string name);
  void announce() const;
};

// utilities
Zombie* zombieHorde(int n, std::string name);

#endif  // EX01_ZOMBIE_HPP_
