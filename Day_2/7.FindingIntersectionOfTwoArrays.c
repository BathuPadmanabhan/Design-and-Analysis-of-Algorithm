#include <stdio.h>

void findIntersection(int nums1[], int m, int nums2[], int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (nums1[i] == nums2[j]) {
                printf("%d ", nums1[i]);
                nums2[j] = -1; //  visited
                break;
            }
        }
    }
}

int main() {
    int nums1[] = {4, 9, 5};
    int nums2[] = {9, 4, 9, 8, 4};
    int m = sizeof(nums1) / sizeof(nums1[0]);
    int n = sizeof(nums2) / sizeof(nums2[0]);

    findIntersection(nums1, m, nums2, n);

    return 0;
}
