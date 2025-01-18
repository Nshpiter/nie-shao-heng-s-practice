#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort(int x[], int n, int y) {
    for (int i = 0; i < n - 1; i++) {
        int t = i;
        for (int j = i + 1; j < n; j++) {
            if ((y && x[j] < x[t]) || (!y && x[j] > x[t])) {
                t = j;
            }
        }
        if (t != i) {
            swap(&x[i], &x[t]);
        }
    }
}
int main() {
    int N;
    scanf("%d", &N);
    int x[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &x[i]);
    }
    sort(x, N, 1);
    for (int i = 0; i < N; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");
    return 0;
}