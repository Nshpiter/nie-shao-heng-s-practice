#include <stdio.h>
int main()
{
    int a=0,b=0,c=0,d,s;
    while(1)
    {
        if (scanf("%d",&d)!=1)
        break;
        if (d==1)
        a++;
        if (d==2)
        b++;
        if (d==3)
        c++;
    }
    s = a*1000+(a/3)*1000+b*500+(b/6)*500+c*200+(c/10)*200;
    printf("%d",s);
    return 0;
}