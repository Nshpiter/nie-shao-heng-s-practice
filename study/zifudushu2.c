#include <stdio.h>

int main() {
    char ch;
    int a = 0, b = 0, c = 0, d = 0;

    while ((ch = getchar()) != '\n') {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            a++;
        } else if (ch >= '0' && ch <= '9') {
            b++;
        } else if (ch == ' ') {
            c++;
        } else {
            d++;
        }
    }

    printf("%d %d %d %d", a, b, c, d);

    return 0;
}
