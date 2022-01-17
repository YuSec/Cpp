#include <iostream>

void get_memory(char **p, int num)
{
    *p = (char *)malloc(num);
}
void add_ab(int a, int b, int &c) {
    c = a + b;
    std::cout << __func__ << std::endl;
}

int main()
{
    //unsigned int a = 0x3e200000;//32bit 8*4
    //unsigned long long int aa = 0x3e20000000000001;//64bit 16*4
    //float b = *(float*)&a;
    //std::cout << a;

    //int tmp = 4, tmp2, tmp3;
    //tmp2 = tmp >> 2;
    //tmp3 = 1 << tmp;
    //std::cout << tmp2;

    // use ** to change function paras
    //char *str = nullptr;
    //get_memory(&str, 100);
    //strcpy(str, "hello!");
    //printf(str);
    int a = 10;
    int b = 20;
    add_ab(a, b, a);

}
