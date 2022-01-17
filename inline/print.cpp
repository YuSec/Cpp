#include "my_add.hpp"
#include <iostream>

/*static -be can the same name in another compile unit*/
static int my_add(int a, int b)
{
    return a / b;
};

void print_rusult() {
    int a = 1, b = 3;
    std::cout << my_add(a, b);
}
