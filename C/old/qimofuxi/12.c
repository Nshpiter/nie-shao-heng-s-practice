#include <stdio.h>
int main() {
    char a[101]; 
    int b = 0;
    int c = 0; 
    int i = 0; 
    fgets(a, sizeof(a), stdin); 
    while(a[i] != '\0'){
        if(a[i] == '\n'){
            a[i] = '\0';
            break;
        }
        i++;
    }
    i = 0; 
    while (a[i] != '\0') { 
        if (a[i] == ' ') { 
            c = 0;         
        } else if (c == 0) { 
            c = 1;         
            b++;        
        }
        i++;
    }
    printf("%d", b);
    return 0;
}