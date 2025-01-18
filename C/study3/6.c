#include <stdio.h>
int main() {
    int num;
    while (scanf("%d", &num) != EOF) {
        if (num == 0) {
            printf("0\n");
            continue;
        }
        char binary[32];  
        int index = 0;
        while (num > 0) {
            binary[index++] = (num % 2) + '0'; 
            num /= 2;
        }
        for (int i = index - 1; i >= 0; i--) {
            printf("%c", binary[i]);
        }
        printf("\n");
    }
    return 0;
}