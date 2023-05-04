#include <iostream>
#include <map>
#include <utility>

int main() {
  std::map<int, unsigned> map;

  int x;
  while (std::cin >> x) {
    // std::pair<std::map<int, unsigned>::iterator, bool> p =
    // map.insert({x, 1});
    auto [entry, inserted] = map.insert({x, 1});

    // if (!p.second) p.first->second++;
    if (!inserted) entry->second++;
  }

  // for (std::pair<int, unsigned> e : map) {
  //  std::cout << e.first << " => " << .second << std::endl;
  // }

  for (auto [key, value] : map) {
    std::cout << key << " => " << value << std::endl;
  }

  return 0;
}
