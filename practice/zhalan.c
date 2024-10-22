#include <stdio.h>
#include <string.h>
#include <math.h>

void decryptRailFence(char *cipher, int rails) {
    int length = strlen(cipher);
    char plaintext[length + 1];
    int index = 0;

    // 创建一个二维数组来表示栅栏
    char rail[rails][length];
    for (int i = 0; i < rails; i++)
        for (int j = 0; j < length; j++)
            rail[i][j] = '\n'; // 初始化为换行符

    // 填充栅栏模式
    int row = 0, dir_down = 0;
    for (int i = 0; i < length; i++) {
        if (row == 0) dir_down = 1; // 向下移动
        if (row == rails - 1) dir_down = 0; // 向上移动
        rail[row][i] = '*'; // 标记当前位置
        row += dir_down ? 1 : -1;
    }

    // 填充密文
    int k = 0;
    for (int i = 0; i < rails; i++) {
        for (int j = 0; j < length; j++) {
            if ((rail[i][j] == '*') && (k < length)) {
                rail[i][j] = cipher[k++]; // 用密文填充
            }
        }
    }

    // 读取明文
    row = 0, dir_down = 0;
    for (int i = 0; i < length; i++) {
        if (row == 0) dir_down = 1;
        if (row == rails - 1) dir_down = 0;
        if (rail[row][i] != '\n') {
            plaintext[index++] = rail[row][i]; // 读取字符
        }
        row += dir_down ? 1 : -1;
    }
    plaintext[index] = '\0'; // 字符串结束

    printf("解密后的明文是: %s\n", plaintext);
}

int main() {
    char cipher[100];
    int rails;

    printf("请输入密文: ");
    fgets(cipher, sizeof(cipher), stdin);
    cipher[strcspn(cipher, "\n")] = 0; // 去除换行符

    printf("请输入栅栏的行数: ");
    scanf("%d", &rails);

    decryptRailFence(cipher, rails);
    return 0;
}
