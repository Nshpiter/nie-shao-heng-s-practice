#include <stdio.h>
int main()
{
    char stuid[10], name[10];
    float score;
    FILE *fp;
    fp = fopen("C:\\Users\\piter\\Desktop\\scores.txt", "r");
    if (fp == NULL)
    {
        printf("无法打开文件！\n");
        return 1; 
    }
    char line[100];
    while (fgets(line, 100, fp) != NULL)
    {
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}