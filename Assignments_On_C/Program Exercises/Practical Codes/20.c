#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr; // Pointer to the array

    for (int i = 0; i < n; i++) {
        sum += *(ptr + i); // Sum the elements using the pointer
    }

    printf("Sum of the elements: %d\n", sum);
    return 0;
}

/*
Explanation of the program:
- The program calculates the sum of n elements from an array using a pointer variable.
- It includes the following steps:
  - Prompts the user to enter the number of elements in the array.
  - Reads the number of elements from the user.
  - Declares an array of the specified size.
  - Prompts the user to enter the elements of the array.
  - Reads the elements of the array from the user.
  - Declares a pointer variable and initializes it to point to the first element of the array.
  - Uses a for loop to iterate through the array elements using the pointer.
    - In each iteration, the value pointed to by the pointer is added to the sum.
    - The pointer is incremented to point to the next element in the array.
  - Prints the sum of the elements.
  - Returns 0 to indicate that the program executed successfully.
*/