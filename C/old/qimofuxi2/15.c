#include <stdio.h>
#include <string.h>

void reverse_string(char *str) {
    int len = strlen(str);
    int left = 0, right = len - 1;

    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char str[] = "Hello, World!";
    reverse_string(str);
    printf("反转后的字符串: %s\n", str);
    return 0;
}