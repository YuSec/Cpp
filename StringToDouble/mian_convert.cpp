#include <string>
#include <iostream>

void int_to_string() {
    std::string str = std::to_string(18);
    if (str.size() < 2) str = "0" + str;
    std::cout << str << std::endl;
}

int main() {
    int_to_string();
    std::string str;
    str = "r 10.0 1.0 2.0";
    double a[3];
    sscanf_s(str.data(), "%*s %lf %lf %lf", a, a + 1, a + 2);
    //%*do not read this var
}
