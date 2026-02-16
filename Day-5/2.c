#include <stdio.h>

// helper to reverse part of array
static inline void reverse(int* nums, int left, int right) {
    while (left < right) {
        int tmp = nums[left];
        nums[left] = nums[right];
        nums[right] = tmp;
        left++;
        right--;
    }
}

// rotate array by k steps
void rotate(int* nums, int numsSize, int k) {
    if (numsSize <= 1) return;
    k %= numsSize;                 // normalize k
    if (k == 0) return;

    reverse(nums, 0, numsSize - 1);     // reverse whole array
    reverse(nums, 0, k - 1);            // reverse first k
    reverse(nums, k, numsSize - 1);     // reverse rest
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 3;

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    rotate(nums, n, k);

    printf("Rotated array:  ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}