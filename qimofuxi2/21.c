#include <stdio.h>

int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int fibSum(int n) {
    if (n <= 1) return n;
    return fib(n) + fibSum(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", fibSum(n));
    return 0;
}