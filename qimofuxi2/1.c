#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;

    printf("a的地址是: %p\n", p);     // 使用指针
    printf("a的地址是: %p\n", &a);    // 使用取地址符
    printf("a的值是: %d\n", *p);      // 打印值

    return 0;   
}
