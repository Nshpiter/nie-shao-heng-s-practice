#include <stdio.h>
#include <string.h>

void encryptRailFence(char *plaintext, int rails) {
    int length = strlen(plaintext);
    char rail[rails][length];
    
    // 初始化栅栏数组
    for (int i = 0; i < rails; i++)
        for (int j = 0; j < length; j++)
            rail[i][j] = '\n'; // 用换行符初始化

    // 填充栅栏
    int row = 0, dir_down = 0;
    for (int i = 0; i < length; i++) {
        rail[row][i] = plaintext[i]; // 填充字符
        if (row == 0) dir_down = 1; // 向下
        if (row == rails - 1) dir_down = 0; // 向上
        row += dir_down ? 1 : -1;
    }

    // 输出密文
    printf("加密后的密文是: ");
    for (int i = 0; i < rails; i++) {
        for (int j = 0; j < length; j++) {
            if (rail[i][j] != '\n')
                printf("%c", rail[i][j]); // 逐行输出字符
        }
    }
    printf("\n");
}

int main() {
    char plaintext[100];
    int rails;

    printf("请输入明文: ");
    fgets(plaintext, sizeof(plaintext), stdin);
    plaintext[strcspn(plaintext, "\n")] = 0; // 去除换行符

    printf("请输入栅栏的行数: ");
    scanf("%d", &rails);

    encryptRailFence(plaintext, rails);
    return 0;
}
