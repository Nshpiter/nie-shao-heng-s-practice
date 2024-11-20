#include <stdio.h>

int main(void) {
    int a = 0, n = 0, s = 0;
    int x;
    
    scanf("%d %d", &a, &n);
    x = a;
    
    for (int i = 1; i <= n; i++) {
        s += x;
        x = x * 10 + a; 
    }

    printf("%d\n", s);

    return 0;
}
