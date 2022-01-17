#include <iostream>
#include <algorithm>

void ex_tan() {
    double x = tan(45 * 3.14 / 180);
}

void ex_max() {
    int R = 1;
    int G = 8;
    int B = 4;
    int tmp = std::max(std::max(R, G), B);
}
int main()
{
    ex_tan();
    ex_max();
    std::getchar();
}
