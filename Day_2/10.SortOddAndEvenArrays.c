#include <stdio.h>

void sortArray(int* nums, int numsSize){
    int temp[numsSize];
    int evenIndex = 0;
    int oddIndex = 1;

    for(int i = 0; i < numsSize; i++){
        if(nums[i] % 2 == 0){
            temp[evenIndex] = nums[i];
            evenIndex += 2;
        } else {
            temp[oddIndex] = nums[i];
            oddIndex += 2;
        }
    }

    for(int i = 0; i < numsSize; i++){
        nums[i] = temp[i];
    }
}

int main(){
    int nums[] = {4, 2, 5, 7, 6, 1, 3};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    sortArray(nums, numsSize);

    printf("Sorted Array: ");
    for(int i = 0; i < numsSize; i++){
        printf("%d ", nums[i]);
    }

    return 0;
}
