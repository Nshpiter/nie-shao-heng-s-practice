#include <stdio.h>
int main()
{
    int num[7];
    int pre=0;
    int last=0;
    int sum=0;
    printf("请输入一个数字序列：\n");
    for (int i=0;i<7;i++){
        printf("请输入第%d个数字：",i+1);
        scanf("%d",&num[i]);
    }
    for (last=1;last<7;last++,pre++){
        sum = num[last] -num[pre];
        printf("%d\n",sum);
    }
    return 0;
}