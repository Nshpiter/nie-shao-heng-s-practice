#include<stdio.h>
int main(void)
{  
    /*********Begin*********/
    int x;
    scanf("%d",&x);
    if (x < 0 || x > 100){
        printf("Score is error!");
    }else if (x >= 90){
        printf("A");
    }else if (x >= 80){
        printf("B");
    }else if (x >= 70){
        printf("C");
    }else if (x >= 60){
        printf("D");
    }else {
        printf("E");
    }
    /*********End**********/ 
    return 0;
}