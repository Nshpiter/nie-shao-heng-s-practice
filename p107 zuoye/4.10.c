#include <stdio.h>

int main() {
    int a, b ,c= 0;
    printf("请输入一个整数: ");
    scanf("%d", &a);
    while (a != 0) {
        c = a % 10;
        if (b != 0 || c != 0) {
            b = b * 10 + c;
        }
        a /= 10;
    }
    printf("颠倒后为: %d\n", b);
    return 0;
}
