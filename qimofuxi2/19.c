#include <stdio.h>
void yuanshen(const char *a){
    if (*a){
        putchar(*a);
        yuanshen(a + 1);
    }
}
int main()
{
    const char *a = "yuanshen qi dong!";
    yuanshen(a);
    putchar('\n');


    return 0;
}