#include <stdio.h>
int main()
{   
    int day=0;
    scanf("%d",&day);
    int a,b;
    a=day/7;
    b=day%7;
    printf("%d周%d天\n",a,b);
    return 0;
}