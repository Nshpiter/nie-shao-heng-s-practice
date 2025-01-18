#include <stdio.h>
int main()
{
    int count =0;
    char s[81];
    while (fgets(s,81,stdin)!=NULL)/*按下Ctrl+Z结束输入*/
    {
        count++;
    }
    printf("行数：%d\n",count);
    return 0;
}