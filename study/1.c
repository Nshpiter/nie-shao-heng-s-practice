#include <stdio.h>
int main()
{
    double a;
    printf("请输入一个数：");
    scanf("%lf",&a);
    if (a==(int)a){
        printf("%lf是整数",a);
    }else {
        printf("%lf不是整数",a);
    }

    return 0;
}