#include <stdio.h>
#include <stdbool.h>

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int maxCandies = 0;
    for (int i = 0; i < candiesSize; i++) {
        if (candies[i] > maxCandies) {
            maxCandies = candies[i];
        }
    }
    
    bool* result = (bool*)malloc(candiesSize * sizeof(bool));
    for (int i = 0; i < candiesSize; i++) {
        result[i] = (candies[i] + extraCandies >= maxCandies) ? true : false;
    }
    
    *returnSize = candiesSize;
    return result;
}

int main() {
    int candies[] = {2, 3, 5, 1, 3};
    int extraCandies = 3;
    int candiesSize = sizeof(candies) / sizeof(candies[0]);
    int returnSize;
    
    bool* result = kidsWithCandies(candies, candiesSize, extraCandies, &returnSize);
    
    printf("Output: [");
    for (int i = 0; i < returnSize; i++) {
        if (i < returnSize - 1) {
            printf("%s, ", result[i] ? "true" : "false");
        } else {
            printf("%s", result[i] ? "true" : "false");
        }
    }
    printf("]\n");
    
    free(result);
    
    return 0;
}
