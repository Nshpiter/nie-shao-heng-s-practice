#include <stdio.h>
int main ()
{
    char c1,c2,c3,c4;
    c1='A';
    c2=65;
    c3='@';
    c4=64;
    printf("%d %d\n",c1,c1);
    printf("%d %d",c3,c4);
    //ASCLL码中'A'=65,以%d形式输出
    return 0;
}