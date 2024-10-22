#include <stdio.h>
int main()
{
    int a_int=2,b_int=-2;
    unsigned int c_uint=4294967293;
    short d_short=2;
    long e_long=4294967294;
    printf("a_int:%d,%u,%o,%x\n",a_int,a_int,a_int,a_int);
    printf("b_int:%d,%u,%o,%x\n",b_int,b_int,b_int,b_int);
    printf("a_int:%ld,%lu,%lo,%lx\n",a_int,a_int,a_int,a_int);
    printf("c_uint:%d,%u\n",c_uint,c_uint);
    printf("d_short:%d,%u\n",d_short,d_short);
    printf("d_short:%hd,%hu\n",d_short,d_short);
    printf("e_long:%hd,%hu\n",e_long,e_long);

    return 0;
}