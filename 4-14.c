#include <stdio.h>

#define swap(t, x, y) {t tmp = x; x = y; y = tmp;}

int main()
{
        int a = 1, b = 2;
        swap(int, a, b);
        printf("%d %d\n", a, b);
        return 0;
}
