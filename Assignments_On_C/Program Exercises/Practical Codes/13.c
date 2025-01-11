#include <stdio.h>

int main() {
    int x, y;
    char rep;
    char op;

    do {
        // Prompt the user to enter two numbers
        printf("Enter two numbers: ");
        scanf("%d %d", &x, &y);

        // Prompt the user to choose an operation
        printf("Choose an operation (+, -, *, /, %%): ");
        scanf(" %c", &op);

        // Perform the chosen operation
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
                printf("Invalid operation.\n");
        }

        // Ask the user if they want to perform another operation
        printf("Do you wish to perform another operation? (Y/N): ");
        scanf(" %c", &rep);

    } while (rep == 'Y' || rep == 'y');

    return 0;
}