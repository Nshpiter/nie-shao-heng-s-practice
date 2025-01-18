#include <stdio.h>

// 选择排序函数
void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {  // 外层循环，控制排序的轮次
        int min_index = i;             // 假定当前起始位置 i 是未排序部分的最小值
        for (int j = i + 1; j < n; j++) {  // 内层循环，寻找未排序部分的最小值
            if (arr[j] < arr[min_index]) { // 比较当前元素是否小于当前最小值
                min_index = j;         // 更新最小值索引
            }
        }
        // 将最小值与当前起始位置的元素交换
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

// 主函数，演示排序
int main() {
    int nums[] = {5, 3, 8, 6, 2};        // 待排序数组
    int n = sizeof(nums) / sizeof(nums[0]); // 计算数组长度，sizeof(nums[0])是单个的字节

    printf("排序前的数组：");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    selection_sort(nums, n);  // 调用选择排序函数

    printf("排序后的数组：");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
