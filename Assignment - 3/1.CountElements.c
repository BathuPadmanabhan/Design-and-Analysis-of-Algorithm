#include <stdio.h>

int countElements(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i] + 1) {
                count++;
                break;
            }
        }
    }
    return count;
}

int main() {
    int arr[10];
    int s,i;
    scanf("%d",&s);//no. array elements
    for(i=0;i<s;i++){
        scanf("%d",&arr[i]);
        }
    printf("Output: %d\n", countElements(arr, sizeof(arr) / sizeof(arr[0])));

    return 0;
}
