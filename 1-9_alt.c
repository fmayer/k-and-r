#include <stdio.h>

int main()
{
        int c;
        while ((c = getchar()) != EOF) {
                if (c == ' ') {
                        putchar(' ');
                        do {
                                c = getchar();
                        } while (c == ' ');
                        if (c == EOF) {
                                return 0;
                        }
                }
                putchar(c);
        }
	return 0;
}
