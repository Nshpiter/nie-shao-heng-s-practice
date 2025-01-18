#include <stdio.h>
int main ()
{
    char c1,c2;
    printf("请输入一个字母：");
    c1 = getchar();
    getchar();//现学的知识
    printf("请再输入一个数：");
    c2 = getchar();
    printf("第一个字符：%c,ASCALL码：%d\n",c1,c1);
    printf("第二个字符：%c,ASCALL码：%d\n",c2,c2);    

    return 0;
}