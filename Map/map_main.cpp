#include <map>
#include <iostream>

int main() {
    std::map<int, float> test_map;
    test_map.insert(std::make_pair(0, 2.1f));
    test_map.insert(std::make_pair(1, 1.1f));
    std::cout << test_map[0] << std::endl;
    for (const auto &it : test_map) {
        std::cout << it.first << std::endl;
        std::cout << it.second << std::endl;
    }
}
