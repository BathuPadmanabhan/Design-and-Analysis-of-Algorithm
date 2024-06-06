#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *nums;
    int *count;
    int size;
} FirstUnique;

FirstUnique* firstUniqueCreate(int* nums, int numsSize) {
    FirstUnique* obj = (FirstUnique*)malloc(sizeof(FirstUnique));
    obj->nums = (int*)malloc(numsSize * sizeof(int));
    obj->count = (int*)calloc(100001, sizeof(int));
    obj->size = 0;
    
    for (int i = 0; i < numsSize; i++) {
        if (obj->count[nums[i]] == 0) {
            obj->nums[obj->size++] = nums[i];
        }
        obj->count[nums[i]]++;
    }
    
    return obj;
}

int firstUniqueShowFirstUnique(FirstUnique* obj) {
    for (int i = 0; i < obj->size; i++) {
        if (obj->count[obj->nums[i]] == 1) {
            return obj->nums[i];
        }
    }
    return -1;
}

void firstUniqueAdd(FirstUnique* obj, int value) {
    if (obj->count[value] == 0) {
        obj->nums[obj->size++] = value;
    }
    obj->count[value]++;
}

void firstUniqueFree(FirstUnique* obj) {
    free(obj->nums);
    free(obj->count);
    free(obj);
}

int main() {
    int nums[] = {2, 3, 5};
    FirstUnique* obj = firstUniqueCreate(nums, 3);
    printf("%d\n", firstUniqueShowFirstUnique(obj));
    firstUniqueAdd(obj, 5);
    printf("%d\n", firstUniqueShowFirstUnique(obj));
    firstUniqueAdd(obj, 2);
    printf("%d\n", firstUniqueShowFirstUnique(obj));
    firstUniqueAdd(obj, 3);
    printf("%d\n", firstUniqueShowFirstUnique(obj));
    firstUniqueFree(obj);
    
    return 0;
}
