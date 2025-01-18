#include <stdio.h>
#define N 6
int main ()
{   
    int yf[N+1],i,j;
    yf[1]=1;
    printf("%5d\n",yf[1]);
    for (i=2;i<=N;i++){
        yf[i]=1;
        for (j=j-1;j>=2;j--)
        yf[j]=yf[j]+yf[j-1];
    for (j=1;j<=i;j++)
        printf("%5d\n",yf[j]);
    printf("\n");
    }
    return 0;
}