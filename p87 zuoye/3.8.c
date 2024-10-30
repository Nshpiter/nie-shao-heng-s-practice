#include <stdio.h>
int main()
{   
    char s[100];
    fgets(s,100,stdin);
    if (s[0]=='\n'){
        printf("你输入的是空串！");
    }else{
        printf("你输入的是：%s\n",s);
    }
    return 0;
}