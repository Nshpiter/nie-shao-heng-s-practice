#include <stdio.h>

int main() {
    int a, b;
    printf("请输入两个正整数:");
    scanf("%d %d", &a, &b);

    // 辗转相除法求最大公约数
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }

    printf("最大公约数是: %d\n", a);

    return 0;
}