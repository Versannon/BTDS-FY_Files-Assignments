#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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

    insertionSort(arr, n);

    printf("Sorted array in ascending order: ");
    printArray(arr, n);

    return 0;
}

/*
Explanation of the program:
- The program sorts a given array of integers using the Insertion Sort method in ascending order.
- It includes the following steps:
  - Defines a function `insertionSort` to sort an array using the Insertion Sort algorithm:
    - Uses a loop to iterate through the array starting from the second element.
    - For each element, stores it in a variable `key` and compares it with the elements before it.
    - Moves elements that are greater than `key` to one position ahead of their current position.
    - Inserts the `key` in its correct position.
  - Defines a function `printArray` to print the elements of an array:
    - Uses a loop to iterate through the array and print each element.
  - In the `main` function:
    - Prompts the user to enter the number of elements in the array.
    - Reads the number of elements from the user.
    - Declares an array to store the elements.
    - Prompts the user to enter the elements of the array.
    - Reads the elements from the user.
    - Calls `printArray` to display the unsorted array.
    - Calls `insertionSort` to sort the array in ascending order.
    - Calls `printArray` to display the sorted array.
  - Returns 0 to indicate that the program executed successfully.
*/