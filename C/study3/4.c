#include <stdio.h>
int main()
{
    int i,j;
    printf("九九乘法表如下：\n");
    for (i=1;i<=9;i++){
        printf("    ");
        for (j=1;j<=i;j++)
            printf("%d*%d=%2d  ",i,j,i*j);
        printf("\n");
    }
    return 0;
}