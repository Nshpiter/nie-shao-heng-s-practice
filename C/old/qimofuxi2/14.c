#include <stdio.h>

int main() {
    int x, y;
    x = (y = 3, y + 2);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}