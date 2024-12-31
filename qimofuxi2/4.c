#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hello";
    printf("%d\n", strlen(str)); // 输出 5
    // 下面三种方式都能输出结果，但推荐度不同
    printf("%d\n", strlen(str));   // 可以工作，但不推荐：可能有警告
    printf("%zu\n", strlen(str));  // 最推荐：专门用于 size_t
    printf("%lu\n", strlen(str));  // 次推荐：通用安全做法


    return 0;
}