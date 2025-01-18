#include <stdio.h>
void bubble(int *arr,int n){
    for (int i = 0;i < n - 1;i++){
        for (int j = 0;j < n - i - 1;j++){
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int nums[] = {5,2,3,7,9,10};
    int n = sizeof(nums) / sizeof(nums[0]);
    bubble(nums,n);
    for (int i = 0;i < n;i++){
        printf("%d ",nums[i]);
    }


    return 0;
}