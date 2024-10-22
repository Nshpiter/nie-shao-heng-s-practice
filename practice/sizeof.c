#include <stdio.h>
int main()
{   
    int a;
    a=6;
    printf("sizeof(int)=%ld\n",sizeof(int));
    printf("sizeof(a)=%ld\n",sizeof(a));
    printf("sizeof(double)=%ld\n",sizeof(double));
    printf("sizeof(float)=%ld\n",sizeof(float));
    printf("sizeof(long double)=%ld\n",sizeof(long double));
    printf("sizeof(long)=%ld\n",sizeof(long));
    printf("sizeof(long long)=%ld\n",sizeof(long long));
    printf("sizeof(short)=%ld\n",sizeof(short));
    printf("sizeof(char)=%ld\n",sizeof(char));

    return 0;
}