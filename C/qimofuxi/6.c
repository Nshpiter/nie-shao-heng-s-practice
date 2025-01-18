#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int a[10][10];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int up = 0;
    int down = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i <= j) {
                up += a[i][j];
            }
            if (i >= j) {
                down += a[i][j];
            }
        }
    }
    printf("%d %d", up, down);
    return 0;
}