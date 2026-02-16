#include <stdio.h>

// Function to remove all occurrences of val from nums
// Returns the new length of the array
int removeElement(int *nums, int numsSize, int val) {
    int i = 0;
    int n = numsSize;

    while (i < n) {
        if (nums[i] == val) {
            nums[i] = nums[n - 1]; // overwrite with last element
            n--;                   // shrink size
        } else {
            i++;                   // move forward
        }
    }
    return n;
}

int main() {
    int n, val;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to remove: ");
    scanf("%d", &val);

    int newSize = removeElement(arr, n, val);

    printf("Array after removal (size = %d): ", newSize);
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}