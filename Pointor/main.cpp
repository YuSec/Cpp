
//void指针可以接受任意类型指针
int main() {
    const void * ptr = 0;//与void *看不出区别
    int a = 100;
    char b = 100;
    ptr = &a;
    ptr = &b;
}
