#include <stdio.h>
int main()
{
    char ch1 [10] = {'H','E','L','L','O','\0'};//构成字符串,\0可以省略
    char ch2 [5] = "hello";//没有元素被赋值为'\0',不构成字符串,会发现输出有问题
    char ch3 [] = "hello";//隐含了结束符'\0'此数组长度为6
    printf("%s\n",ch1);
    printf("%s\n",ch2);
    printf("%s\n",ch3);
    return 0;
}