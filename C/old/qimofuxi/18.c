#include <stdio.h>

int main() {
    // 以九九乘法表为例，演示循环嵌套
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d*%d=%-2d ", j, i, i * j);
        }
        printf("\n");
    }
    return 0;
}