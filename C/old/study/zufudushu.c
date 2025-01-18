#include <stdio.h>

int main() {
    char ch[100];
    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; (ch[i] = getchar()) != '\n'; i++) {
        if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z')) {
            a++;
        } else if (ch[i] >= '0' && ch[i] <= '9') {
            b++;
        } else if (ch[i] == ' ') {
            c++;    
        } else {
            d++;
        }
    }
    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}