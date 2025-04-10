#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index of the key if found
        }
    }
    return -1; // Return -1 if the key is not found
}

int main() {
    int n, key, result;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    result = linearSearch(arr, n, key);

    if (result != -1) {
        printf("Key found at index %d\n", result);
    } else {
        printf("Key not found\n");
    }

    return 0;
}

/*
Explanation of the program:
- The program uses a non-recursive function to search for a key value in a given list of integers using the linear search method.
- It includes the following steps:
  - Defines a function `linearSearch` to perform the linear search:
    - Takes an array, the number of elements in the array, and the key to search as arguments.
    - Uses a loop to iterate through the array.
    - Compares each element with the key.
    - Returns the index of the key if found.
    - Returns -1 if the key is not found.
  - In the `main` function:
    - Prompts the user to enter the number of elements in the array.
    - Reads the number of elements from the user.
    - Declares an array to store the elements.
    - Prompts the user to enter the elements of the array.
    - Reads the elements from the user.
    - Prompts the user to enter the key to search.
    - Reads the key from the user.
    - Calls the `linearSearch` function to search for the key in the array.
    - Checks the result of the search:
      - If the key is found, prints the index of the key.
      - If the key is not found, prints a message indicating that the key is not found.
  - Returns 0 to indicate that the program executed successfully.
*/