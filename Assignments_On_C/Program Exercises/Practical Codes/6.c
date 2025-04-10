#include <stdio.h>

int main() {
    int num, sum = 0, x, rem, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    x = num;

    while (x != 0) {
        rem = x % 10;
        sum += rem;
        rev = rev * 10 + rem;
        x /= 10;
    }

    printf("Sum of digits of %d = %d\n", num, sum);

    if (num == rev)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}

/*
Explanation of the program:
- The program calculates the sum of the digits of a given number and checks if the number is a palindrome.
- It includes the following steps:
  - Declares variables to store the number, the sum of digits, a temporary variable, the remainder, and the reversed number.
  - Prompts the user to enter a number.
  - Reads the number from the user.
  - Stores the original number in a temporary variable.
  - Uses a while loop to calculate the sum of digits and reverse the number:
    - Gets the last digit of the number.
    - Adds the digit to the sum.
    - Builds the reversed number by appending the digit.
    - Removes the last digit from the number.
  - Prints the sum of the digits.
  - Checks if the original number is equal to the reversed number:
    - If they are equal, prints that the number is a palindrome.
    - If they are not equal, prints that the number is not a palindrome.
  - Returns 0 to indicate that the program executed successfully.
*/