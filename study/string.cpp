#include <iostream>
#include <ostream>
#include <string>

int main() {
  std::string curto = "Hello World!";
  std::string longo = "Essa eh uma string grande para o exemplo!";
  std::cout << curto << std::endl;
  std::cout << longo << std::endl;
  std::cout << longo.length() << std::endl;
  return 0;
}
