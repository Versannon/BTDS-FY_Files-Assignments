#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 >= num2 && num1 >= num3)
        printf("%d is the largest number.\n", num1);
    if (num2 >= num1 && num2 >= num3)
        printf("%d is the largest number.\n", num2);
    if (num3 >= num1 && num3 >= num2)
        printf("%d is the largest number.\n", num3);
    return 0;
}

/*
Explanation of the program:
- The program finds the largest of three given numbers.
- It includes the following steps:
  - Declares variables to store the three numbers.
  - Prompts the user to enter three numbers.
  - Reads the three numbers from the user.
  - Uses if statements to compare the numbers and determine the largest:
    - If num1 is greater than or equal to both num2 and num3, prints that num1 is the largest.
    - If num2 is greater than or equal to both num1 and num3, prints that num2 is the largest.
    - If num3 is greater than or equal to both num1 and num2, prints that num3 is the largest.
  - Returns 0 to indicate that the program executed successfully.
*/