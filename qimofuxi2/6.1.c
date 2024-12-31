#include <stdio.h>
int main()
{
    FILE *fp = fopen("a.txt","w");
    if (fp == NULL){
        printf("error");
        return 1;
    }
    fprintf(fp,"hello world");
    fclose(fp);
    return 0;
}