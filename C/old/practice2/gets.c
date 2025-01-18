#include <stdio.h>
int main()
{
    char name[10];
    printf("请输入姓名：");
    gets(name);
    printf("姓名：%s\n", name);
    /*gets函数遇到换行符结束,scanf函数遇到空白符结束*/
    return 0;
}