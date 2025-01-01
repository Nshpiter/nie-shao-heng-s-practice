#include <stdio.h>

int a(int n){
    if (n == 0){
        return 1;
    }
    return n * a(n - 1);
}

int main()
{
    int n;
    scanf("%d",&n);
    int s = a(n);
    printf("%d",s);
    
    return 0;
}