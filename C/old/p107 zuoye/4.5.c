#include <stdio.h>
int main()
{
    int x,y;
    for (x=1;x<=5;x+=2)
    {
        for (y=1;y<5;y++)
        {
            printf("%3d",x*y);
        }
        printf("\n");
    }


    return 0;
}