#include "Harl.hpp"
#include <iostream>

int main() {
  Harl harl;
  harl.complain("DEBUG");
  std::cout << '\n';
  harl.complain("INFO");
  std::cout << '\n';
  harl.complain("WARNING");
  std::cout << '\n';
  harl.complain("ERROR");
  std::cout << '\n';
  std::cout << "LOVE: ";
  harl.complain("LOVE");
}
