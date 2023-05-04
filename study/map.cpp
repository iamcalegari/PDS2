#include <iostream>
#include <vector>

struct MapEntry {
  int key;
  unsigned value;
};

using Map = std::vector<MapEntry>;

int main() {
  Map map;

  int x;
  while (std::cin >> x) {
    unsigned i = 0;
    for (; i < map.size() && map[i].key != x; i++);

    if (i == map.size()) {
      MapEntry e = {x, 1};
      map.push_back(e);
    } else {
      map[i].value++;
    }
  }
  
  for (MapEntry e : map) {
    std::cout << e.key << " => " << e.value << std::endl;
  }

  return 0;
}
