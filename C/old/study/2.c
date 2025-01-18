#include<stdio.h>
int main()
{
    int x,a=1,b=1,c=1;
    x=(a=0)||(b=2)||(c=3);
    printf("x=%d,a=%d,b=%d,c=%d\n",x,a,b,c);
    return 0;
}