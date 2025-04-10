#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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

    bubbleSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}

/*
Explanation of the program:
- The program implements the Bubble Sort method to sort a given list of integers in ascending order.
- It includes the following steps:
  - Defines a function `bubbleSort` to sort an array using the Bubble Sort algorithm:
    - Uses nested loops to iterate through the array.
    - Compares adjacent elements and swaps them if they are in the wrong order.
    - Repeats the process until the array is sorted.
  - Defines a function `printArray` to print the elements of an array:
    - Uses a loop to iterate through the array and print each element.
  - In the `main` function:
    - Prompts the user to enter the number of elements in the array.
    - Reads the number of elements from the user.
    - Declares an array to store the elements.
    - Prompts the user to enter the elements of the array.
    - Reads the elements from the user.
    - Calls `printArray` to display the unsorted array.
    - Calls `bubbleSort` to sort the array.
    - Calls `printArray` to display the sorted array.
  - Returns 0 to indicate that the program executed successfully.
*/