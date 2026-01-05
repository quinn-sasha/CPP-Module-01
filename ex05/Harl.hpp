#ifndef EX05_HARL_HPP_
#define EX05_HARL_HPP_

#include <string>

class Harl {
  void debug();
  void info();
  void warning();
  void error();

 public:
  void complain(std::string level);
};

#endif  // EX05_HARL_HPP_
