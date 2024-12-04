#include<stdio.h>
//编写题目要求的函数
/*********Begin*********/
double y(int n){
    double s = 1.0;
    double a = 1.0;
    double b = 1.0;

    for (int i = 1; i <= n; i++){
        if (i == 1){
            b = 3.0;
        } else {
            b *= (2 * i + 1);
        }
        a *= i;
        double x = a / b;
        s += x; // 累加每一项的值到s中
    }
    return s;
}
/*********End**********/ 
int main(void)
{  
    /*********Begin*********/
    int n;
    scanf("%d", &n);
    double s = y(n); // 调用函数计算表达式的值
    printf("%.10lf\n", s); // 输出结果，保留10位小数
    /*********End**********/ 
    return 0;
}