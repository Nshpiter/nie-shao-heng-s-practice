#include <stdio.h>
int main() {
    long long N, a = 0, b = 0;
    int c = 1;
    scanf("%lld", &N);
    while (N > 0) {
        b += (N % 10) * c;
        N /= 10;
        if (N == 0) break;
        a += (N % 10) * c;
        N /= 10;
        c *= 10;
    }
    printf("%lld %lld\n", b, a);
    return 0;
}
