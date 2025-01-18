#include <stdio.h>
#include <string.h>
int main() {
    int repeat;
    scanf("%d", &repeat);
    for(int r = 0; r < repeat; r++) {
        int n;
        scanf("%d", &n);
        int count[6] = {0}; 
        for(int i = 0; i < n; i++) {
            int score;
            scanf("%d", &score);
            if(score >= 1 && score <= 5) {
                count[score]++;
            }
        }
        int max_count = 0;
        for(int i = 1; i <= 5; i++) {
            if(count[i] > max_count) {
                max_count = count[i];
            }
        }
        for(int level = max_count; level >= 1; level--) {
            for(int score = 1; score <= 5; score++) {
                if(count[score] >= level) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
            printf("\n");
        }
        printf("1 2 3 4 5\n");
    }
    return 0;
}