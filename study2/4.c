#include<stdio.h>
#include<math.h>

//定义main函数
int main()
{
	//请在此添加您的代码
	/*****************Begin******************/
    double x1=0.0;
    double x0;
    do {
        x0=x1;
        x1=cos(x0);
    }while (fabs(x0-x1)>=0.000001);
    printf("root=%lf",x0);
	/***************** End ******************/
	return 0;
}
