#include <stdio.h>

int main()
{
        int c;
        char state = 0;
        while ((c = getchar()) != EOF) {
                if (c == '\n' || c == ' ' || c == '\t') {
                        if (state) {
                                putchar('\n');
                                state = 0;
                        }
                } else {
                        putchar(c);
                        state = 1;
                }
        }
        return 0;
}
