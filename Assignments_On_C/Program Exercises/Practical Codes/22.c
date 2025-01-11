/*
Write a C program to create and display a food menu card, allowing the user to
place an order, modify their order, adjust quantities, and view the total bill after
any changes.
*/
#include<stdio.h>
int main()
{
    int select, quantity, total = 0;
    char reselect, billChoice;
    do
    {
        printf("\nCafe Menu:\n");
        printf("1. Tea - 15/- \n");
        printf("2. Iced Tea - 60/- \n");
        printf("3. Coffee - 30/- \n");
        printf("4. Latte - 50/- \n");
        printf("5. cappuccino - 90/- \n");
        printf("6. Macchiato - 120/- \n");
        printf("7. Bagels with cream cheese - 145/- \n");
        printf("8. Egg and cheese - 100/- \n");
        printf("9. Croissants - 30/- \n");
        printf("10. Ice-cream - 30/- \n");
        printf("Enter your choice (1-10): ");
        scanf("%d", &select);

        if(select <= 10 && select >= 1)
        {
            switch (select)
            {
                case 1:
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    total += 15 * quantity;
                    break;
                case 2:
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    total += 60 * quantity;
                    break;
                case 3:
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    total += 30 * quantity;
                    break;
                case 4:
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    total += 50 * quantity;
                    break;
                case 5:
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    total += 90 * quantity;
                    break;
                case 6:
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    total += 120 * quantity;
                    break;
                case 7:
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    total += 145 * quantity;
                    break;
                case 8:
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    total += 100 * quantity;
                    break;
                case 9:
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    total += 30 * quantity;
                    break;
                case 10:
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    total += 30 * quantity;
                    break;
            }
        printf("Do you want to order anything else? (y/n): ");
        scanf(" %c", &reselect);
        }

        else
        {
            printf("Error! Please select from (1-10) or type 'Y' to generate bill: ");
            scanf(" %c", &billChoice);
            if (billChoice == 'Y')
            {
                reselect = 'n';
            }
        }
    }

    while (reselect == 'y');
    printf("\nYour Bill:\n");
    printf("Total: %d/- \n", total);
    return 0;
}