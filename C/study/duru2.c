#include <stdio.h>
int main()
{
    char ch;
    printf("请输入一个字符：");
    scanf(" %c",&ch);//%c前面有空格,确保了读入的是一个字符
    printf("你输入的字符是：%c\n",ch);
    return 0;
}