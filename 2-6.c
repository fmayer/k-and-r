#include <stdio.h>

unsigned int setbits(unsigned int x, int p, int n, unsigned int y)
{
        unsigned int mask = ~(~0 << n) << (p+1 - n);
        y <<= p + 1 - n;
        return (x & ~mask) | y;
}

int main()
{
        printf("%d\n", setbits(1, 2, 2, 3));
        return 0;
}
