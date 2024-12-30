#include <stdio.h>

int main() {
    int choice;
    printf("请输入一个数字（1-3）：");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("你选择了 1\n");
            break;
        case 2:
            printf("你选择了 2\n");
            break;
        case 3:
            printf("你选择了 3\n");
            break;
        default:
            printf("无效输入\n");
            break;
    }

    return 0;
}