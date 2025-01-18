#include <stdio.h>

int main() {
    FILE *infile;
    char s[100];
    infile = fopen("C:\\Users\\piter\\Desktop\\city.txt", "r");
    if (infile == NULL) {
        printf("不能打开文件\n");
    } else {
        while (fgets(s, sizeof(s), infile) != NULL) /*sizeof(s)也可以换成前面的100*/{
            printf("%s", s);
        }
        fclose(infile);
    }
    return 0;
}