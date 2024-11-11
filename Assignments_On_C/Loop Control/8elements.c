#include <stdio.h>

int main() {
    int i;
    // Declare an array of integers
    int arr[] = {1, 3, 7, 11};
    // Initialize sum to 0
    int sum = 0;
    // Get the length of the array
    int arrLength = sizeof(arr) / sizeof(arr[0]);

    // Loop through each element in the array
    for (i = 0; i < arrLength; i++) {
        // Add the current element to the sum
        sum += arr[i];
        // Print the sum after each addition
        printf("%d\n", sum);
    }

    return 0;
}