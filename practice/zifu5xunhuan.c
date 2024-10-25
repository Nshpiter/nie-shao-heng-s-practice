#include <stdio.h>
int main()
{
    char c;
    while ((c = getchar()) != '\n') {
        printf("%c", c);
    }
    
    return 0;
}