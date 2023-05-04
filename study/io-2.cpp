#include <iostream>
#include <sstream>

int main() {
  std::string line;

  while (std::getline(std::cin, line)) {
  std::istringstream row(line);

  std::string s;
  row >> s;
  int i;
  row >> i;
  std::cout << "[" << s << " | " << i << "]" << std::endl;
  }
  return 0;
}
