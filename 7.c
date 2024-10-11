#include <stdio.h>

int main() {
    int numbers[20];
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    int positive_sum = 0;
    int negative_sum = 0;

    printf("请输入20个整数：\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 20; i++) {
        if (numbers[i] > 0) {
            positive_count++;
            positive_sum += numbers[i];
        } else if (numbers[i] < 0) {
            negative_count++;
            negative_sum += numbers[i];
        } else {
            zero_count++;
        }
    }

    printf("正整数个数：%d\n", positive_count);
    printf("负整数个数：%d\n", negative_count);
    printf("0的个数：%d\n", zero_count);
    printf("正整数之和：%.2f\n", (float)positive_sum);
    printf("负整数之和：%.2f\n", (float)negative_sum);
    printf("正整数平均值：%.2f\n", (float)positive_sum / positive_count);
    printf("负整数平均值：%.2f\n", (float)negative_sum / negative_count);

    return 0;
}