#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 2) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

/*
Explanation of the program:
- The program checks if a given number is a prime number.
- It includes the following steps:
  - Declares variables to store the number, loop counter, and a flag to indicate if the number is prime.
  - Prompts the user to enter a number.
  - Reads the number from the user.
  - Checks if the number is less than 2:
    - If the number is less than 2, sets the flag to 0 (not prime).
  - Uses a for loop to check for factors from 2 to half of the number:
    - If a factor is found, sets the flag to 0 (not prime) and breaks the loop.
  - Checks the flag to determine if the number is prime:
    - If the flag is 1, prints that the number is a prime number.
    - If the flag is 0, prints that the number is not a prime number.
  - Returns 0 to indicate that the program executed successfully.
*/