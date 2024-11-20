#include<stdio.h>

int main(void)
{  
    /*********Begin*********/
    double s = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 1) {
            s += 1.0 / i;  // 奇数项为正
        } else {
            s -= 1.0 / i;  // 偶数项为负
        }
    }
    printf("%.3lf", s);
    /*********End**********/ 
    return 0;
}