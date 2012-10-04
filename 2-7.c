#include <stdio.h>


unsigned int invert(unsigned int x, int p, int n)
{
        unsigned int mask = ~(~0 << n) << (p+1 - n);
        return (x & ~mask) | (~x & mask);
}

int main()
{
        printf("%d\n", invert(0, 2, 3));
        return 0;
}