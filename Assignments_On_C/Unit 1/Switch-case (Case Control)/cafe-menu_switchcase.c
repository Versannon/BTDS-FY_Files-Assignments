#include <stdio.h>

int main() {
  int sel, num, total = 0;
  char resel, billChoice;
  do {
    printf("\nCafe Menu:\n");
    printf("1. Tea - 15/- \n");
    printf("2. Coffee - 30/- \n");
    printf("3. Sandwich - 50/- \n");
    printf("4. Cappuccino - 50/- \n");
    printf("5. Croissant - 70/- \n");
    printf("6. Ice-cream - 30/- \n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &sel);

    if (sel >= 1 && sel <= 6) { // Valid choice
      switch (sel) {
        case 1:
          printf("Enter quantity: ");
          scanf("%d", &num);
          total += 15 * num;
          break;
        case 2:
          printf("Enter quantity: ");
          scanf("%d", &num);
          total += 30 * num;
          break;
        case 3:
          printf("Enter quantity: ");
          scanf("%d", &num);
          total += 50 * num;
          break;
        case 4:
          printf("Enter quantity: ");
          scanf("%d", &num);
          total += 50 * num;
          break;
        case 5:
          printf("Enter quantity: ");
          scanf("%d", &num);
          total += 70 * num;
          break;
        case 6:
          printf("Enter quantity: ");
          scanf("%d", &num);
          total += 30 * num;
          break;
      }

      printf("Do you want to order anything else? (y/n): ");
      scanf(" %c", &resel); 
    } else { // Invalid choice
      printf("Error! Please select from (1-6) or type 'Y' to generate bill: ");
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
