#include <stdio.h>
int main()
{
    int x,a=0,b=0,c=0,d=0;
    x=(a=1)||(b=2)&&(c=3)&&(d=4);
    printf("x=%d,a=%d,b=%d,c=%d,d=%d\n",x,a,b,c,d);
    return 0;
}