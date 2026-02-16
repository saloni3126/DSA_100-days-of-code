# include<stdio.h>
/*int main(){
    int n;
    printf("enter the no of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int left=0;
    int right=n-1;
    while(left<right){
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
    printf("reversed array:");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}*/
#include <stdio.h>

// Function to reverse array using double pointer
void reverseArray(int **arr, int n) {
    int *left = *arr;          // pointer to first element
    int *right = *arr + n - 1; // pointer to last element

    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Pass the address of the array (double pointer)
    int *p = arr;
    reverseArray(&p, n);

    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}