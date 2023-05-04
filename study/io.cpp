#include <iostream>

int main(){
  std::string s;
  std::cin >> s;
  std::cout << "[" << s << "]" << std::endl;
  int i;
  while (std::cin >> i) {
    std::cout << "[" << i << "]" << std::endl;
  
  }
  return 0;
}
