#include <iostream>
#include <string>
#include "Harl.hpp"

#define DEBUG 0
#define INFO 1
#define WARNING 2
#define ERROR 3

namespace {
int get_corresponding_level(std::string level) {
  static std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  for (int i = 0; i < 4; i++) {
    if (levels[i] == level) {
      return i;
    }
  }
  return -1;
}
}  // namespace

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "Usage: ./harl_filter <level> (e.g WARNING)" << std::endl;
    return 1;
  }
  int level = get_corresponding_level(argv[1]);
  if (level == -1) {
    std::cout << "[ Probably complaining about insignificant problems ]"
              << std::endl;
    return 0;
  }

  Harl harl;
  switch (level) {
    case DEBUG:  // FALL THROUGH !!
      std::cout << "[ DEBUG ]" << std::endl;
      harl.complain("DEBUG");
      std::cout << '\n';

    case INFO:  // FALL THROUGH !!
      std::cout << "[ INFO ]" << std::endl;
      harl.complain("INFO");
      std::cout << '\n';

    case WARNING:  // FALL THROUGH !!
      std::cout << "[ WARNING ]" << std::endl;
      harl.complain("WARNING");
      std::cout << '\n';

    case ERROR:  // FALL THROUGH !!
      std::cout << "[ ERROR ]" << std::endl;
      harl.complain("ERROR");
      std::cout << '\n';
  }
}
