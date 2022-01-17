
#include <iostream>

int main()
{
    //extract decimal section
    //const int INTER_BITS = 5, INTER_TAB_SIZE = 1 << INTER_BITS;
    //int sx = round(32.512 * INTER_TAB_SIZE);
    //int sy = round(32.575*INTER_TAB_SIZE);
    //int v = (sy & (INTER_TAB_SIZE - 1))*INTER_TAB_SIZE; //+ (sx & (INTER_TAB_SIZE - 1));
    //v = (sx & (INTER_TAB_SIZE - 1))*INTER_TAB_SIZE;
    //std::cout << "Hello World!\n";

    //extract 0xff;
    int a = 0x8866;
    int b = (a >> 8) & (0xff);
}
