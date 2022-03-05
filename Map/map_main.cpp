#include <map>
#include <iostream>

int main() {
    std::map<int, float> test_map;
    test_map.insert(std::make_pair(2, 2.1f));
    test_map.insert(std::make_pair(1, 1.1f));
    if (test_map.find(0) == test_map.end())
        std::cout << "error" << std::endl;
    else
        std::cout << test_map[0] << std::endl;
    if (test_map.count(1) == 0)
        std::cout << "error" << std::endl;
    else
        std::cout << test_map[1] << std::endl;
    for (const auto &it : test_map) {
        std::cout << it.first << std::endl;
        std::cout << it.second << std::endl;
    }
}
