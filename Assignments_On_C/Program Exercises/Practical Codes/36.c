#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[][50], int n) {
    char temp[50];
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {
                // Swap arr[j] and arr[j+1]
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
}

void printArray(char arr[][50], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s\n", arr[i]);
    }
}

int main() {
    int n;
    printf("Enter the number of names: ");
    scanf("%d", &n);

    char names[n][50];
    printf("Enter the names:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    printf("Unsorted names:\n");
    printArray(names, n);

    bubbleSort(names, n);

    printf("Sorted names:\n");
    printArray(names, n);

    return 0;
}

/*
Explanation of the program:
- The program sorts a given array of names using the Bubble Sort method.
- It includes the following steps:
  - Defines a function `bubbleSort` to sort an array of names using the Bubble Sort algorithm:
    - Uses nested loops to iterate through the array.
    - Compares adjacent names using `strcmp` and swaps them if they are in the wrong order.
    - Repeats the process until the array is sorted.
  - Defines a function `printArray` to print the elements of an array:
    - Uses a loop to iterate through the array and print each name.
  - In the `main` function:
    - Prompts the user to enter the number of names.
    - Reads the number of names from the user.
    - Declares a 2D array to store the names.
    - Prompts the user to enter the names.
    - Reads the names from the user.
    - Calls `printArray` to display the unsorted names.
    - Calls `bubbleSort` to sort the names in ascending order.
    - Calls `printArray` to display the sorted names.
  - Returns 0 to indicate that the program executed successfully.
*/