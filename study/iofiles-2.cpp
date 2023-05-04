#include <fstream>
#include <iostream>
#include <string>

int main() {
  std::ifstream i("entrada.txt", std::ifstream::in);
  if (!i.is_open()) {return 1;}
  std::ofstream o("saida.txt", std::fstream::out);
  if (!o.is_open()) {return 1;}
  
  std::string line;
  while (std::getline(i, line)) {
    std::cout << line << std::endl;
    o << line << std::endl;
  }
  i.close();
  o.close();

  return 0;
}
