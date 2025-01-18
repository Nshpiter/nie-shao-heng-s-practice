/*#include <stdio.h>
int main()
{
    long long N;
    scanf("%lld",&N);
    long long a = 0,b = 0;
    int i = 1;
    while (N>0){
        if (i%2==0){
            int x = N % 10;
            a+= (N % 10) * i;
        }else {
            int y = N % 10;
            b+= (N % 10) * i;
        }
        N/=10;
        i++;
    }
    printf("%lld %lld",b,a);
    return 0;
}*/错误了，请看3.1