#include <stdio.h>

int main() {
    char char1 = 'A';
    char char2 = 'B';
    char char3 = 'ABCDE';//错误书写发现字符输出是以最后一个截断输出
    char string1[] = "hello world";
    char string2[] = "very good";
    char string3[] = "6";
    printf("char1 = %c\n", char1);
    printf("char2 = %c\n",char2);
    printf("char3 = %c\n",char3);
    printf("string1 = %s\n",string1);
    printf("string2 = %s\n",string2);
    printf("string3 = %c\n",string3);//可以发现即便是输入一个字符，一旦用了字符串输入，输出如果是%c,会得到�

    return 0;
}