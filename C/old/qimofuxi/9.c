#include <stdio.h>
int main() {
    int M, N, P;
    scanf("%d %d %d", &M, &N, &P);
    int a[100][100];
    int b[100][100];
    int c[100][100];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            c[i][j] = 0;
            for (int k = 0; k < N; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}