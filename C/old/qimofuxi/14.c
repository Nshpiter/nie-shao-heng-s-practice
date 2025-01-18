#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;
    int n ;  // 这里指定第 n 个元素
    scanf("%d",&n);
    p = p + n;

    printf("p 所指向的元素是: %d\n", *p);
    return 0;
}