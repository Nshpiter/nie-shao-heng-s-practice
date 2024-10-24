#include <stdio.h>
int main ()
{   
    char c1, c2;
    c1 = getchar(); // 读取第一个字符
    getchar(); // 消耗掉换行符,关键！！！(这种相比前面的话更加人性化，但就是不能输入xy来得到了，与前者互补，一种很好的思维)
    scanf("%c", &c2); // 读取第二个字符

    printf("c1: %c\n", c1); // 正确输出第一个字符
    printf("c2: %c\n", c2); // 正确输出第二个字符

    return 0;
}