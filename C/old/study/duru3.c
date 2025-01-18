#include <stdio.h>
int main()
{
    char ch[100];
    for (int i = 0; i < 20; i++)
    {
        scanf(" %c", &ch[i]);//空格可以选择不输入
        printf("你输入的字符是: %c\n", ch[i]);
    }
    printf("你输入的是: %s", ch);
    return 0;
}