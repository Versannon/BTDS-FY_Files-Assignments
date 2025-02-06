#include <stdio.h>

void selectionSortDescending(int arr[], int n) {
    int i, j, max_idx, temp;
    for (i = 0; i < n-1; i++) {
        max_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        // Swap the found maximum element with the first element
        temp = arr[max_idx];
        arr[max_idx] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unsorted array: ");
    printArray(arr, n);

    selectionSortDescending(arr, n);

    printf("Sorted array in descending order: ");
    printArray(arr, n);

    return 0;
}

/*
Explanation of the program:
- The program sorts a given array of integers using the Selection Sort method in descending order.
- It includes the following steps:
  - Defines a function `selectionSortDescending` to sort an array using the Selection Sort algorithm:
    - Uses nested loops to iterate through the array.
    - Finds the maximum element in the unsorted part of the array.
    - Swaps the found maximum element with the first element of the unsorted part.
    - Repeats the process until the entire array is sorted in descending order.
  - Defines a function `printArray` to print the elements of an array:
    - Uses a loop to iterate through the array and print each element.
  - In the `main` function:
    - Prompts the user to enter the number of elements in the array.
    - Reads the number of elements from the user.
    - Declares an array to store the elements.
    - Prompts the user to enter the elements of the array.
    - Reads the elements from the user.
    - Calls `printArray` to display the unsorted array.
    - Calls `selectionSortDescending` to sort the array in descending order.
    - Calls `printArray` to display the sorted array.
  - Returns 0 to indicate that the program executed successfully.
*/