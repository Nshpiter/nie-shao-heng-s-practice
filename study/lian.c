#include <stdio.h>
int main()
{
    char a[]="hello world!";
    int i=0;
    while (a[i]!='\0'){
        printf("%c\n",a[i]);
        i++;
    }
    printf("字符的长度是%d\n",i);
    printf("%s",a);
    return 0;
}