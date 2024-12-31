#include <stdio.h>
int main()
{
    char a;
    a = getchar();
    putchar(a);
    scanf("%c",&a);
    printf("%c",a);
    //a = fgetc(stdin);
    //fputc(a,stdout);
    return 0;
}