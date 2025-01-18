#include <stdio.h>
int main()
{
    int count = 0;
    int s;
    while ((s = getchar()) != EOF)
    {
        if (s == '\n')
        {
            count++;
        }
    }
    printf("行数：%d\n", count);
    return 0;
}