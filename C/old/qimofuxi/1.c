#include <stdio.h>
int main()
{
    int A,B;
    scanf("%d",&A);
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 1;i < A;i++){
        if (A % i ==0){
            sum1+=i;
        }
    }
    B = sum1;
    for (int i = 1;i < B;i++){
        if (B % i ==0){
            sum2+=i;
        }
    }
    if (sum1 == B && A != B){
        printf("%d",B);
    }else {
        printf("-1");
    }

    return 0;
}