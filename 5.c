#include<stdio.h>
int main()
{
    int sum = 0;
    for (int i =1;i<=1000;i++){
        if (i % 3==0){
            sum += i;
        }
    }
    printf("sum = %d",sum);
    return 0;
}