#include <stdio.h>
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换两个元素
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int nums[] = {5, 3, 8, 6, 2};
    int n = sizeof(nums) / sizeof(nums[0]);//计算数组长度

    bubble_sort(nums, n);

    printf("排序后的数组：");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
