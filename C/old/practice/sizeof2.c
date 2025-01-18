#include <stdio.h>
int main()
{
    int a;
    a=6;
    printf("sizeof(long double)=%ld\n",sizeof(long double));
    printf("sizeog(a+1.0)=%ld\n",sizeof(a+1.0));
    printf("a=%d\n",a);
    return 0;
}