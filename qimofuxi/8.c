#include <stdio.h>
int main() {
    int M, N;
    scanf("%d %d", &M, &N);
    int a[100][100];
    int b[100][100];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            b[i][j] = a[j][i];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d", b[i][j]);
            if (j < M - 1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}