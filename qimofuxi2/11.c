#include <stdio.h>
#include <string.h>

int main() {
    char str[100];   // 存储字符串
    char ch;         // 存储要查找的字符
    int count = 0;   // 用于统计匹配次数

    printf("请输入一个字符串：");
    fgets(str, sizeof(str), stdin);  // 输入字符串

    printf("请输入要查找的字符：");
    scanf("%c", &ch);  // 输入目标字符

    // 遍历字符串
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {  // 如果当前字符与目标字符匹配
            count++;
        }
    }

    printf("字符 '%c' 在字符串中出现了 %d 次。\n", ch, count);
    return 0;
}
