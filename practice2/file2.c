#include <stdio.h>
#include <stdlib.h>
#define N 5
int main()
{
    char stuid[10],name[10];
    float score;
    FILE *outfile;
    int i;
    outfile=fopen("C:\\Users\\piter\\Desktop\\scores.txt","w");
    if (outfile==NULL)
    {
        printf("不能创建文件！");
        exit(0);
    }
    fprintf(outfile,"学号\t姓名\t成绩\n");
    for (i=0;i<N;i++)
    {
        printf("请输入学号、姓名、成绩：");
        scanf("%s%s%f",stuid,name,&score);
        fprintf(outfile,"%s\t%s\t%f\n",stuid,name,score);
    }
    fclose(outfile);
    return 0;
}