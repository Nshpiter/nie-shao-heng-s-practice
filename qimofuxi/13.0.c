#include <stdio.h>
int main()
{
    char s[100];
    char t[100];
    sscanf("%s",&s);
    sscanf("%s",&t);
    while (s[i] != '\0') {
         j = 0;
        while(t[j] != '\0'){
           if(s[i+j] != t[j]){
               break;
           }
           j++;
        }
        if(t[j] == '\0'){
            printf("%d\n", i);
            found = 1;
        }
       i++;
    }
    if (!found) {
       printf("-1\n");
    }   


    return 0;
}