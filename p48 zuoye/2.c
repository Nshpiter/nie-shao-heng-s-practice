#include<stdio.h>
int main()
{
    double a,b,c,min;
    printf("请输入三个数,用空格分离：");
    scanf("%lf %lf %lf",&a,&b,&c);
    min=a;
    if (b<min){
        min=b;
    }
    if (c<min){
        min=c;
    }
    printf("最小值为：%lf",min);
    return 0;
}