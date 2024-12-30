#include <stdio.h>
int main()
{   
    int N;
    scanf("%d",&N);
    int a = 0;
    int b = 0;
    while (N > 0){
        a = N % 10;
        b = b * 10 + a;
        N /=10;
    }
    printf("%d",b);

    return 0;

}