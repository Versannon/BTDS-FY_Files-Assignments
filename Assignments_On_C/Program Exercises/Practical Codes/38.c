#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if key is present at mid
        if (arr[mid] == key) {
            return mid;
        }

        // If key is greater, ignore the left half
        if (arr[mid] < key) {
            left = mid + 1;
        }
        // If key is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }
    // Key is not present in the array
    return -1;
}

int main() {
    int n, key, result;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the sorted elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    result = binarySearch(arr, n, key);

    if (result != -1) {
        printf("Key found at index %d\n", result);
    } else {
        printf("Key not found\n");
    }

    return 0;
}

/*
Explanation of the program:
- The program uses a non-recursive function to search for a key value in a given sorted list of integers using the binary search method.
- It includes the following steps:
  - Defines a function `binarySearch` to perform the binary search:
    - Takes an array, the number of elements in the array, and the key to search as arguments.
    - Initializes two variables, `left` and `right`, to represent the range of the array to be searched.
    - Uses a loop to repeatedly divide the range in half:
      - Calculates the middle index of the current range.
      - Compares the key with the middle element.
      - If the key is equal to the middle element, returns the index of the middle element.
      - If the key is greater than the middle element, updates `left` to search the right half.
      - If the key is smaller than the middle element, updates `right` to search the left half.
    - Returns -1 if the key is not found.
  - In the `main` function:
    - Prompts the user to enter the number of elements in the array.
    - Reads the number of elements from the user.
    - Declares an array to store the elements.
    - Prompts the user to enter the sorted elements of the array.
    - Reads the elements from the user.
    - Prompts the user to enter the key to search.
    - Reads the key from the user.
    - Calls the `binarySearch` function to search for the key in the array.
    - Checks the result of the search:
      - If the key is found, prints the index of the key.
      - If the key is not found, prints a message indicating that the key is not found.
  - Returns 0 to indicate that the program executed successfully.
*/