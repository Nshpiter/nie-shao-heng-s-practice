#include <stdio.h>
int main()
{
    int i = 0;
    char s[100];
    printf("请输入一个字符串：");
    fgets(s,100,stdin);
    int max =s[0];
    for (i=0;s[i]!='\0';i++){
        if (s[i]>max){
            max = s[i];
        }
    }
    printf("最大值为：%d\n",max);
    return 0;
}