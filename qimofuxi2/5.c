#include <stdio.h>

// 演示用的函数
int get_value(void) {
    printf("函数被调用\n");
    return 42;
}

int main(void) {
    // 1. 基本赋值 - 逗号表达式返回最后一个值
    int a = (1, 2, 3);  // a将被赋值为3
    printf("a = %d\n", a);

    // 2. 多变量操作
    int b, c;
    (b = 1, c = 2);  // 依次执行赋值操作
    printf("b = %d, c = %d\n", b, c);

    // 3. 在循环中使用逗号运算符
    for(int i = 0, j = 5; i < 3; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }

    // 4. 数组操作
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int value = (*ptr++, *ptr++, *ptr);  // 获取第三个元素
    printf("第三个元素: %d\n", value);

    // 5. 在函数调用中使用
    int result = (printf("计算开始...\n"), get_value());
    printf("结果: %d\n", result);

    return 0;
}