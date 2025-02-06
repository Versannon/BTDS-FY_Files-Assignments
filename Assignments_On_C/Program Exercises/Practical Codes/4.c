#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("You are eligible to vote.\n");
    else
        printf("You are not eligible to vote.\n");

    return 0;
}

/*
Explanation of the program:
- The program checks if a person is eligible to vote based on their age.
- It includes the following steps:
  - Declares a variable to store the age.
  - Prompts the user to enter their age.
  - Reads the age from the user.
  - Uses an if-else statement to check if the age is 18 or older:
    - If the age is 18 or older, prints that the person is eligible to vote.
    - If the age is less than 18, prints that the person is not eligible to vote.
  - Returns 0 to indicate that the program executed successfully.
*/