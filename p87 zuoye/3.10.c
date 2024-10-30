#include <stdio.h>
int main()
{
    char ch[100];
    printf("请输入字符串:\n");
    fgets(ch,sizeof(ch),stdin);
    FILE *outfile;
    outfile=fopen("D:\\vscode practice\\p87 zuoye\\3.10.txt","w");
    for (int i=0;ch[i]!='\0';i++)
    fprintf(outfile,"%c\n",ch[i]);
    fclose(outfile);
    return 0;
}