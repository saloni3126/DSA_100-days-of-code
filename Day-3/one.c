#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    int comparisons = 0;

    for (int i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == target) {
            printf("Element found at index %d\n", i);
            printf("Total comparisons: %d\n", comparisons);
            return i;
        }
    }

    printf("Element not found\n");
    printf("Total comparisons: %d\n", comparisons);
    return -1;
}

int main() {
    int n, target;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    linearSearch(arr, n, target);

    return 0;
}
