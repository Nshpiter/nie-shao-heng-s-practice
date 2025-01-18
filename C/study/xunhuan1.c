#include <stdio.h>
int main()
{
    char a[]="hello world";
    int i=0;
    while (a[i]!='\0'){
        printf("%c\n",a[i]);
        i++;
    }
    printf("字符的长度是%d",i);
    return 0;
}