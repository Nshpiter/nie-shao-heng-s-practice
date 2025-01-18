#include <stdio.h>
int main()
{
    int a,b,c;
    printf("请输入一个两位数：");
    scanf("%d",&a);
    if (a >= 10 && a <= 99)
    {
        b=a/10;
        c=a%10;
        a=c*10+b;
        printf("颠倒后为：%d\n",a);
    }else {
        printf("输入错误！\n");
    }
    return 0;
}