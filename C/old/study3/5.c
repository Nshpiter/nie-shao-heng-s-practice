#include <stdio.h>
#define N 10
int main()
{
    int data[N+1],i,j,t;
    printf("请输入%d个整数：\n", N);
    for (i=1;i<=N;i++)
        scanf("%d",&data[i]);
    for (i=1;i<N;i++){
        for (j=1;j<=N-1;j++)
            if (data[j]>data[j+1]){
                t=data[j];  data[j]=data[j+1];  data[j+1]=t;
            }
    }
    printf("结果是：\n");
    for (i=1;i<=N;i++)
        printf("%d  ",data[i]);
    printf("\n");
    return 0;
}