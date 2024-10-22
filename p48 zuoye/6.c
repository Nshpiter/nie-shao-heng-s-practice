#include <stdio.h>
#include <limits.h>

int main() {
    int numbers[20];
    int max_positive = INT_MIN;
    int min_positive = INT_MAX;
    int max_negative = INT_MIN;
    int min_negative = INT_MAX;

    printf("请输入20个整数：\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 20; i++) {
        if (numbers[i] > 0) {
            if (numbers[i] > max_positive) {
                max_positive = numbers[i];
            }
            if (numbers[i] < min_positive) {
                min_positive = numbers[i];
            }
        } else if (numbers[i] < 0) {
            if (numbers[i] > max_negative) {
                max_negative = numbers[i];
            }
            if (numbers[i] < min_negative) {
                min_negative = numbers[i];
            }
        }
    }

    printf("最大正整数：%d\n", max_positive);
    printf("最小正整数：%d\n", min_positive);
    printf("最大负整数：%d\n", max_negative);
    printf("最小负整数：%d\n", min_negative);

    return 0;
}