#include <stdio.h>

int main() {
    int total = 0;
    char resel;

    do {
        int choice, quantity;
        printf("\nCafe Menu:\n");
        printf("1. Tea - 15/- \n");
        printf("2. Coffee - 30/- \n");
        printf("3. Sandwich - 50/- \n");
        printf("4. Cappuccino - 50/- \n");
        printf("5. Croissant - 70/- \n");
        printf("6. Ice-cream - 30/- \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("Enter quantity: ");
        scanf("%d", &quantity);

        if (choice >= 1 && choice <= 6) {
            switch (choice) {
                case 1:
                    total += 50 * quantity;
                    break;
                case 2:
                    total += 30 * quantity;
                    break;
                case 3:
                    total += 20 * quantity;
                    break;
                case 4:
                    total += 40 * quantity;
                    break;
                case 5:
                    total += 60 * quantity;
                    break;
                case 6:
                    total += 70 * quantity;
                    break;
            }
            printf("Do you want to order anything else? (y/n): ");
            scanf(" %c", &resel);
        } else { // Invalid choice
            printf("Error! Please select from (1-6) or type 'Y' to generate bill: ");
            char billChoice;
            scanf(" %c", &billChoice);
            if (billChoice == 'Y') {
                resel = 'n'; // Exit the loop if user wants to generate the bill
            }
        }
    } while (resel == 'y');

    printf("\nYour Bill:\n");
    printf("Total: %d/- \n", total);

    return 0;
}

/*
Explanation of the program:
- The program simulates a simple billing system for a menu with six items.
- It includes the following steps:
  - Declares variables for the total bill amount and a character to reselect items.
  - Uses a do-while loop to allow the user to select items and quantities multiple times.
  - Inside the loop:
    - Prompts the user to enter their choice of item from the menu.
    - Reads the user's choice.
    - Prompts the user to enter the quantity of the selected item.
    - Reads the quantity.
    - Checks if the user's choice is valid (between 1 and 6):
      - If valid, uses a switch statement to add the cost of the selected item (based on its price and quantity) to the total bill.
      - Prompts the user to decide if they want to order anything else.
      - Reads the user's decision.
    - If the user's choice is invalid:
      - Prompts the user to select a valid choice or type 'Y' to generate the bill.
      - Reads the user's decision.
      - If the user types 'Y', sets the reselect variable to 'n' to exit the loop.
  - The loop continues as long as the user enters 'y' to reselect items.
  - After exiting the loop, prints the total bill amount.
  - Returns 0 to indicate that the program executed successfully.
*/