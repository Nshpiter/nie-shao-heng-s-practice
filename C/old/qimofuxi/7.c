#include <stdio.h>
int main()
{
    int M,N;
    scanf("%d %d",&M,&N);
    int a[100][100];
    int max = 1000000; 
    int min = -1000000;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] > max) {
                max = a[i][j];
            }
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }
    printf("%d", max - min);
    return 0;
}