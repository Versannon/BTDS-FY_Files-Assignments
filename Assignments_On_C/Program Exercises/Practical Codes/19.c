#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr; // Pointer to the array

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i); // Read elements into the array using the pointer
    }

    printf("The elements of the array in reverse order are:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i)); // Display the elements in reverse order using the pointer
    }
    printf("\n");

    return 0;
}

/*
Explanation of the program:
- The program reads elements into an array using a pointer and then displays the values in reverse order using the pointer.
- It includes the following steps:
  - Prompts the user to enter the number of elements in the array.
  - Reads the number of elements from the user.
  - Declares an array of the specified size.
  - Declares a pointer variable and initializes it to point to the first element of the array.
  - Prompts the user to enter the elements of the array.
  - Uses a for loop to read the elements into the array using the pointer.
    - In each iteration, the value entered by the user is stored in the array at the position pointed to by the pointer.
    - The pointer is incremented to point to the next element in the array.
  - Uses a for loop to display the elements of the array in reverse order.
    - In each iteration, the value of the array element is printed in reverse order by decrementing the pointer.
  - Prints a newline character for formatting.
  - Returns 0 to indicate that the program executed successfully.
*/