#include <stdio.h>

int htoi(char s[]) {
        char v;
        int i = 0, r = 0;
        if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
                i = 2;
        }
        for (; s[i] != '\0'; ++i) {
                if (s[i] >= '0' && s[i] <= '9') {
                        v = s[i] - '0';
                } else if (s[i] >= 'a' && s[i] <= 'f') {
                        v = 10 + s[i] - 'a';
                } else if (s[i] >= 'A' && s[i] <= 'F') {
                        v = 10 + s[i] - 'A';
                } else {
                        return -1;
                }
                r = 16 * r + v;
        }
        return r;
}

int main() {
        printf("%d\n", htoi("0xFF"));
        return 0;
}
