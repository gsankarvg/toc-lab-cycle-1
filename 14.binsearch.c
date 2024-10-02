#include <stdio.h>

int binarysearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; 
}

int main() {
    int arr[] = {1, 2, 3, 4, 5,6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int target;
    int position;

    printf("Enter the target: ");
    scanf("%d", &target);

    position = binarysearch(arr, size, target);

    if (position != -1) {
        printf("Target found at index: %d\n", position);
    } else {
        printf("Target not found.\n");
    }

    return 0;
}
