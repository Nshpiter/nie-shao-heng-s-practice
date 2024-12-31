#include <stdio.h>

int main() {
    char ch;

    printf("请输入字符，按 Ctrl+D（Linux/macOS）或 Ctrl+Z（Windows）结束输入：\n");
    while ((ch = getchar()) != EOF) {  // 检测是否输入结束
        putchar(ch);  // 回显输入的字符
    }

    printf("\n输入结束。\n");
    return 0;
}
