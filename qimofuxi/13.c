#include <stdio.h>
int main() {
    char s[101], t[101];
    int i, j, found = 0;
    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);
    i = 0;
    while(s[i] != '\0'){
        if(s[i] == '\n'){
            s[i] = '\0';
            break;
        }
         i++;
    }
     i = 0;
    while(t[i] != '\0'){
        if(t[i] == '\n'){
            t[i] = '\0';
            break;
        }
         i++;
    }
    i = 0;
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