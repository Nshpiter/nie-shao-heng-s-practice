#include <stdio.h>
int main()
{   
    char ch [10]= "hello";
    int i;
    for (i=0;i<10;i++){

        putchar(ch[i]);
        
    }
    printf("\n");//putchar('\n');也可以。换行
        for (i=0;i<10;i++){

        printf("%c",ch[i]);//涉及循环读入，所以使用%c,一个一个字符读
        
    }
    putchar('\n');
    char ch2 [10] = "hello";
    int x;
    for (x = 0;ch[x]!='\0'; x++) {
        putchar(ch[x]);
    }


    return 0;
}
