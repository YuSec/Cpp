#include <iostream>
#include <omp.h>
static int a = 2 + 3;
static int b = omp_get_max_threads();
int main() {
    std::cout << a << " " << b;
}
