#include<stdio.h>
//编写题目要求的函数
/*********Begin*********/
double y(int n){
    double s = 1.0;
    double a = 1.0;
    double b = 1.0;

    for (int i=0;i<=n;i++){
        if (i==1){
            b = 3.0;
        }else {
            b * = (2 *i + 1);
        }
        a * = i;
        double x = a / b;
    }
    return s;
}
/*********End**********/ 
int main(void)
{  
    /*********Begin*********/
    int n;
    scanf("%d",&n);
    double s = double y(n);
    printf("%.10lf\n", s);
    /*********End**********/ 
    return 0;
}