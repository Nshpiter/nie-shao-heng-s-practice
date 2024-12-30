#include <stdio.h>

// 定义并初始化一维数组
// 数组名arr是指向首元素的常量指针
void printArray(int arr[], int size) {
    // 传址方式：传递的是数组首地址
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 计算数组的平均值、最大值和最小值
void calcStats(int arr[], int size, double *avg, int *max, int *min) {
    int sum = 0;
    *max = arr[0];
    *min = arr[0];
    for(int i = 0; i < size; i++) {
        sum += arr[i];
        if(arr[i] > *max) *max = arr[i];
        if(arr[i] < *min) *min = arr[i];
    }
    *avg = (double)sum / size;
}

int main() {
    // 一维数组定义和初始化
    int numbers[] = {10, 20, 15, 30, 25};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // 调用函数之前的打印
    printArray(numbers, size);

    // 传值：仅传递数组的部分元素
    // 这并不会改变原数组的元素
    int singleVal[] = {numbers[0]};
    printArray(singleVal, 1);

    // 传址：直接传递数组地址
    double average;
    int maximum, minimum;
    calcStats(numbers, size, &average, &maximum, &minimum);

    // 输出统计结果
    printf("Average: %.2f\n", average);
    printf("Max: %d\n", maximum);
    printf("Min: %d\n", minimum);

    return 0;
}