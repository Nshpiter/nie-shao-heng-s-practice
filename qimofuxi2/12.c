#include <stdio.h>

int main() {
    char str[100];          // 存储字符串
    int digits = 0;         // 数字个数
    int uppercase = 0;      // 大写字母个数
    int lowercase = 0;      // 小写字母个数
    int symbols = 0;        // 符号个数

    printf("请输入一个字符串：");
    fgets(str, sizeof(str), stdin);  // 输入字符串

    // 遍历字符串
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {           // 判断是否为数字
            digits++;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {    // 判断是否为大写字母
            uppercase++;
        } else if (str[i] >= 'a' && str[i] <= 'z') {    // 判断是否为小写字母
            lowercase++;
        } else if (str[i] != ' ' && str[i] != '\n') {   // 判断是否为符号，忽略空白字符
            symbols++;
        }
    }

    // 输出统计结果
    printf("数字个数：%d\n", digits);
    printf("大写字母个数：%d\n", uppercase);
    printf("小写字母个数：%d\n", lowercase);
    printf("符号个数：%d\n", symbols);
    return 0;
}
