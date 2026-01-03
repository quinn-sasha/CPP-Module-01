#include <fstream>
#include <iostream>
#include <string>

namespace {
std::string replace(const std::string& line, const std::string& target,
                    const std::string& replacement) {
  if (target.empty()) {
    return line;
  }
  if (line.find(target) == std::string::npos) {
    return line;
  }

  std::string result;
  std::size_t left = 0;
  while (true) {
    std::size_t found = line.find(target, left);
    if (found == std::string::npos) {
      result.append(line.substr(left));
      return result;
    }
    result.append(line.substr(left, found - left));
    result.append(replacement);
    left = found + target.length();
  }
}
} // namespace

int main(int argc, char* argv[]) {
  if (argc != 4) {
    std::cerr
        << "Usage: ./replace_string <filename> <target str> <replacement str>"
        << std::endl;
    return 1;
  }
  std::ifstream infile(argv[1], std::ios::in);
  if (!infile.is_open()) {
    std::cerr << "File not found" << std::endl;
    return 1;
  }
  std::string out_filename = argv[1];
  out_filename.append(".replace");
  std::ofstream outfile(out_filename, std::ios::out | std::ios::trunc);
  if (!outfile.is_open()) {
    std::cerr << "File not found" << std::endl;
    return 1;
  }

  std::string line;
  const std::string target = argv[2];
  const std::string replacement = argv[3];
  while (true) {
    std::getline(infile, line);
    if (infile.eof()) {
      return 0;
    }
    std::string replaced = replace(line, target, replacement);
    outfile << replaced << std::endl;
  }
}
