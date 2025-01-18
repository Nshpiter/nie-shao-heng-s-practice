#include <stdio.h>
int a(int n){
    int sum = 0;
    for (int i=1;i<n;i++){
        if (n % i == 0){
            sum+=i;
        }
    }
    return sum;
}
int main()
{
    int A;
    scanf("%d",&A);
    int B = a(A);
    if (B!=A&&A==a(B)){
        printf("%d",B);
    }else {
        printf("-1");
    }

    return 0;
}