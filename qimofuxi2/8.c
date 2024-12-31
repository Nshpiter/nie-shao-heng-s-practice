#include <stdio.h>
int main()
{
    char a[100];
    //读入字符串的方法
    fgets(a,sizeof(a),stdin);
    scanf(" %s",a);
    gets_s(a,sizeof(a));
    gets(a);
    printf("%s",a);


    return 0;
}