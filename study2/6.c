#include <stdio.h>

int main() {
    int A, B;

    // 使用scanf循环读取输入，直到输入结束
    while (scanf("%d %d", &A, &B) == 2) {
        // 在这里处理A和B的值
        printf("A = %d, B = %d\n", A, B);
    }

    return 0;
}