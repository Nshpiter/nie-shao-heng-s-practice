#include <stdio.h>
int main() {
    int num1, num2;
    char op;
    while (1) {
        if (scanf("%d %c %d", &num1, &op, &num2) != 3) {
            break; 
        }
        switch (op) {
            case '+':
                printf("%d\n", num1 + num2);
                break;
            case '-':
                printf("%d\n", num1 - num2);
                break;
            case '*':
                printf("%d\n", num1 * num2);
                break;
            case '/':
                if (num2 == 0) {
                    printf("error\n");
                } else {
                    printf("%d\n", num1 / num2);
                }
                break;
            case '%':
                if (num2 == 0) {
                    printf("error\n"); 
                } else {
                    printf("%d\n", num1 % num2);
                }
                break;
            case '!':
                if (num1 < 0) {
                    printf("error\n"); 
                } else {
                    long long result = 1;
                    for (int i = 1; i <= num1; i++) {
                        result *= i;
                    }
                    printf("%lld\n", result);
                }
                break;
            default:
                printf("error\n");
        }
    }
    return 0;
}
