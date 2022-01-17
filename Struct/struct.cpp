#include <iostream>
#include <Windows.h>
#include <chrono>
#include "cpp_timer.hpp"
MyCppTimer timer;

struct MyStruct
{
    void operator()(int &sum)
    {
        for (int i = 0; i < 1000; i++) {
            for (int j = 0; j < 10000; j++) {
                sum += i;
            }
        }
    }
};

int main() {
    int sum = 0;
    MyStruct my_struct;
    //DWORD start = GetTickCount();
    //auto start = std::chrono::steady_clock().now();
    timer.restart();
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 10000; j++) {
            sum += i;
        }
    }
    timer.time(__FILE__, __LINE__);
    //auto result = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock().now() - start).count() / 1000.f;
    //std::cout << result << " " << sum << std::endl;
    //std::cout << GetTickCount() - start << " " << sum << std::endl;
    sum = 0;
    //DWORD start_struct = GetTickCount();
    //auto start_struct = std::chrono::steady_clock().now();
    timer.restart();
    my_struct(sum);
    timer.time(__FILE__, __LINE__);
    //auto result_struct = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock().now() - start_struct).count() / 1000.f;
    //std::cout << result_struct << " " << sum << std::endl;
    //std::cout << GetTickCount() - start_struct << " " << sum;
}
