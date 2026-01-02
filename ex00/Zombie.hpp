#ifndef EX00_ZOMBIE_HPP_
#define EX00_ZOMBIE_HPP_

#include <string>

class Zombie {
  std::string name;

public:
  Zombie(std::string name);
  ~Zombie();

  void announce() const;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif // !EX00_ZOMBIE_HPP_
