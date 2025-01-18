#include <stdio.h>

const char *find_substring(const char *str, const char *sub) {
    while (*str) {
        const char *p1 = str;
        const char *p2 = sub;

        while (*p1 && *p2 && *p1 == *p2) {
            p1++;
            p2++;
        }

        if (!*p2) {
            return str;  // 找到子串
        }

        str++;
    }

    return NULL;  // 未找到子串
}

int main() {
    const char *str = "Hello, World!";
    const char *sub = "World";

    const char *result = find_substring(str, sub);
    if (result) {
        printf("子串 '%s' 在字符串中的位置: %ld\n", sub, result - str);
    } else {
        printf("未找到子串 '%s'\n", sub);
    }

    return 0;
}