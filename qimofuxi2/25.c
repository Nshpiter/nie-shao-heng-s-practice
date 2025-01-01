#include <stdio.h>
void xuanze(int a[],int n){
    for (int i = 0;i < n - 1;i++){
        int MIN = i;
        for (int j = i + 1;j < n;j ++){
            if (a[j] < a[MIN]){
                MIN = j;
            }
        }
        int temp = a[i];
        a[i] = a[MIN];
        a[MIN] = temp;
    }
}
int main()
{
    int nums[] = {5,2,4,9,8,11};
    int n = sizeof(nums) / sizeof(nums[0]);
    xuanze(nums,n);
    for (int i = 0;i < n;i++){
    printf("%d ",nums[i]);
}


    return 0;
}