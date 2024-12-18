#include <stdio.h>
#include <string.h>
int main() {
    char str[51];
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        char *p = str + i;
        while (*p != '\0') {
            printf("%c", *p);
            p++;
        }
        printf("\n");
    }
    return 0;
}