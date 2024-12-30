#include <stdio.h>
int main ()
{
    long long N;
    scanf("%lld",&N);
    long long a = 0;
    long long b = 0;
    long long a1 = 1;
    long long b1 = 1;
    int i = 1;
    while (N > 0){
        int t = N % 10;
        if (i % 2 == 0){
            a = a + t * a1;
            a1 *= 10;
        }else {
            b = b + t * b1;
            b1 *= 10;
        }
        N /= 10;
        i++;
    }
    printf("%lld %lld",b,a);
    return 0;
}