#include <stdio.h>
#define N 1000
int main()
{
    char stuid[N],name[N],score[N];
    FILE *infile;
    infile=fopen("C:\\Users\\piter\\Desktop\\scores.txt","r");
    if (infile==NULL)
    {
        printf("不能打开文件!");
        return 1;
    }
    while (fscanf(infile,"%s\t%s\t%s",stuid,name,score)==3)
    printf("%s\t%s\t%s\n",stuid,name,score);
    fclose(infile);
    return 0;
}