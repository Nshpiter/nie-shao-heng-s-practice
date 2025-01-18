#include <stdio.h>

int main() {
    // 定义 2D 数组并输出
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // 存储字符串并输出
    char words[2][10] = {"Hello", "C"};
    for(int i = 0; i < 2; i++) {
        printf("%s\n", words[i]);
    }

    // 矩阵相加并输出
    int matA[2][2] = {{1, 2}, {3, 4}};
    int matB[2][2] = {{5, 6}, {7, 8}};
    int sum[2][2];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            sum[i][j] = matA[i][j] + matB[i][j];
        }
    }
    printf("Matrix sum:\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
