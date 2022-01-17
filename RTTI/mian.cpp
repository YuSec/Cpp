#include <typeinfo>
#include <iostream>
//run-time type identify
int main() {
    unsigned char *tmp = nullptr;
    const type_info& t1 = typeid(tmp);
    std::cout << t1.name();
}
