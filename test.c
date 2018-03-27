#include <stdio.h>

int main()
{
    int x, n; 

    x = 0x80000000;
    n = 0;

    int shift = (x >> 31) & n;
    int k = (1 << shift) - 1;

    printf("0x%x\n", shift);
    printf("0x%x\n", k);
    printf("0x%x\n", (x + k) >> n);
    return 0;
}
