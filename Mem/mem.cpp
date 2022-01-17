#include <iostream> 
#include <cstdio>

void ex_memcopy() {
    int bufstep = 100;
    int ksize = 2;
    std::unique_ptr<int[]> int_ptr(new int[bufstep*ksize]);
    int i = 0;
    for (i = 0; i < bufstep; i++) {
        int_ptr[i] = 0;
    }
    for (; i < bufstep*ksize; i++) {
        int_ptr[i] = 1;
    }
    int *rows[2];
    for (int k = 0; k < ksize; k++) {
        rows[k] = int_ptr.get() + k * bufstep;
    }
    memcpy(rows[0], rows[1], bufstep * sizeof(rows[0][0]));//rows[0] copyto rows[1]
}

void ex_memset() {
    int bufstep = 100;
    int ksize = 2;
    std::unique_ptr<int[]> int_ptr(new int[bufstep*ksize]);
    //for (int i = 0; i < bufstep*ksize; i++) {
    //    int_ptr[i] = 0;
    //}
    int * int_ptr_ = int_ptr.get();
    //memset(int_ptr_, int(100), bufstep*ksize * sizeof(int));//在给char以外的数组赋值时，只能初始化为0或者-1。
    std::fill(int_ptr_, int_ptr_ + 50, 100);
    //std::fill_n();
}

int main() {
    //short x = 0x7fff;//保存在内存中是ff 7f

    //short y = 32767;
    //char str[128];
    //sprintf_s(str, "%X", y);
    //printf("%s", str);

    //ex_memcopy();
    ex_memset();
}
