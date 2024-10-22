#include <stdio.h>

// 计算两个数的最大公约数
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 计算三个数的最大公约数
int gcd_of_three(int a, int b, int c) {
    return gcd(gcd(a, b), c);
}

int main() {
    int a, b, c;
    printf("请输入三个正整数：");
    scanf("%d %d %d", &a, &b, &c);

    int result = gcd_of_three(a, b, c);
    printf("三个数的最大公约数是：%d\n", result);
    
    return 0;
}
