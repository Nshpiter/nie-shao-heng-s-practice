#include <stdio.h>
int main()
{
    int a,b,c;
    printf("请输入三个正整数：");
    scanf("%d %d %d",&a,&b,&c);
    while (b!=0)
    {
        int x=a%b;
        a=b;
        b=x;
    }
    printf("a和b的最大公约数是：%d\n",a);
    while (b!=0)
    {
        int y=c%b;
        c=b;
        b=y;
    }
    printf("b和c的最小公约数是：%d\n",c);
    while (a!=0)
    {
        int z=c%a;
        c=a;
        a=z;
    }
    printf("三个数的最大公约数是：%d\n",c);
    return 0;
}