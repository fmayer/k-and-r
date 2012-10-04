#include <stdio.h>

int main()
{
        int c;
        char lc = 0;
        while ((c = getchar()) != EOF) {
                if (c != ' ' || !lc) {
                        putchar(c);
                }
                lc = c == ' ';
        }
	return 0;
}
