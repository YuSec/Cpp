#include <iostream>
#include <memory>

void test_unique_ptr() {
    //cannot copy and run '=' operate

    //std::unique_ptr<int> ptr;
    //ptr = std::unique_ptr<int>(new int(5));
    //std::cout << *ptr << std::endl;

    //std::unique_ptr<int[]> ptr(new int[10]);
    //ptr[1] = 1;
    //std::cout << ptr[1] << std::endl;
    const int second = 3;
    std::unique_ptr<int[][second]> ptr(new int[10][second]);
    //ptr[0][0] = 0;
    //ptr[0][1] = 1;
    //ptr[0][2] = 2;
    //ptr[1][2] = 3;

    std::unique_ptr<int[][second]> ptr1(new int[11][second]);
    auto ptr2 = &ptr;
    ptr1 = std::move(ptr);
}

std::unique_ptr<int> arg2;
void unique_fun(std::unique_ptr<int> &arg1) {
    arg2 = std::move(arg1);
}

void test_shared_ptr() {
    std::shared_ptr<int[]> ptr(new int[10]);
    for (int i = 0; i < 10; i++) {
        ptr[i] = i;
    }
}

int main()
{
    test_shared_ptr();
    test_unique_ptr();
}
