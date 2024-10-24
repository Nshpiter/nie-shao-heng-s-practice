#include <stdio.h>
int main ()
{   
    char c1, c2;
    printf("请输入两个字符：\n");//这个要一起输入
    c1 = getchar();
    scanf("%c",&c2);

    putchar(c1);
    putchar(c2);

    return 0;
}