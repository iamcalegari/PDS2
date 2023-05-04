#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>

int main() {
  std::ifstream in("entrada.txt", std::fstream::in);
  std::ofstream out("saida.txt", std::fstream::out);

  std::string line;
 
  while (std::getline(in, line)) {
    std::cout << line << std::endl;
    out << line << std::endl;
  }

  in.close();
  out.close();
  return 0;
}
