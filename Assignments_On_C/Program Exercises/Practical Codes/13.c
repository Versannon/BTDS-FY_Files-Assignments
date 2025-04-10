#include <stdio.h>

int main() {
    int x, y;
    char rep;
    char op;

    do {
        printf("Enter two numbers: ");
        scanf("%d %d", &x, &y);

        printf("Choose an operation (+, -, *, /, %%): ");
        scanf(" %c", &op);

        switch (op) {
            case '+':
                printf("Result: %d + %d = %d\n", x, y, x + y);
                break;
            case '-':
                printf("Result: %d - %d = %d\n", x, y, x - y);
                break;
            case '*':
                printf("Result: %d * %d = %d\n", x, y, x * y);
                break;
            case '/':
                if (y != 0)
                    printf("Result: %d / %d = %d\n", x, y, x / y);
                else
                    printf("Error: Division by zero is not allowed.\n");
                break;
            case '%':
                if (y != 0)
                    printf("Result: %d %% %d = %d\n", x, y, x % y);
                else
                    printf("Error: Division by zero is not allowed.\n");
                break;
            default:
                printf("Error: Invalid operation.\n");
        }

        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &rep);
    } while (rep == 'y' || rep == 'Y');

    return 0;
}

/*
Explanation of the program:
- The program performs basic arithmetic operations (+, -, *, /, %) on two numbers entered by the user.
- It includes the following steps:
  - Declares variables to store the two numbers, the operation, and the repeat character.
  - Uses a do-while loop to repeatedly prompt the user for input and perform operations until the user chooses to stop.
  - Prompts the user to enter two numbers.
  - Prompts the user to choose an arithmetic operation.
  - Uses a switch statement to perform the chosen operation:
    - Adds, subtracts, multiplies, divides, or finds the remainder of the two numbers based on the chosen operation.
    - Checks for division by zero and handles it appropriately.
    - Prints the result of the operation.
  - Prompts the user to decide whether to perform another operation.
  - Repeats the process if the user chooses to continue.
  - Returns 0 to indicate that the program executed successfully.
*/