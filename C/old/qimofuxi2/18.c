#include <stdio.h>

void print_string(const char *str) {
    while (*str) {
        putchar(*str);
        str++;
    }
}

int main() {
    const char *str = "Hello, World!";
    print_string(str);
    putchar('\n');
    return 0;
}