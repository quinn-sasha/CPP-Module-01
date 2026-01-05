#ifndef EX06_HARL_HPP_
#define EX06_HARL_HPP_

#include <string>

class Harl {
  void debug();
  void info();
  void warning();
  void error();

public:
  void complain(std::string level);
};

#endif  // EX06_HARL_HPP_
