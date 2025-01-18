#include <stdio.h>

void print_string(const char *str) {
    if (*str) {
        putchar(*str);
        print_string(str + 1);
    }
}

int main() {
    const char *str = "Hello, World!";
    print_string(str);
    putchar('\n');
    return 0;
}