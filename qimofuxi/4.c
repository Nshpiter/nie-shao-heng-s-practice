#include <stdio.h>
int main()
{
    int a[10];
    for (int i = 0;i < 10;i++){
        scanf("%d",&a[i]);
    }
    int t;
    for (int i = 0;i < 5;i++){
        t = a[i];
        a[i] = a[i + 5];
        a[i + 5]= t;
    }
    for (int i = 0;i < 10;i++){
        printf("%d",a[i]);
        if (i < 9){
            printf(",");
        }
    }
    return 0;
}