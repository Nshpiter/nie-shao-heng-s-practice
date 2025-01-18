#include <stdio.h>
int main()
{
    int N;
    int n = 0;
    scanf("%d",&N);
    for (;N>0;N/=10){
        int t = N % 10;
        n = n * 10 + t;
    }
    printf("%d",n);
    return 0;
}