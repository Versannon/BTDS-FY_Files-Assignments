#include <stdio.h>

#define MAX_CONTACTS 10

struct Contact {
    char name[50];
    int phone;
};

int main() {
    struct Contact contacts[MAX_CONTACTS];
    int n;

    printf("Enter the number of contacts: ");
    scanf("%d", &n);

    // Input details for each contact
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for contact %d:\n", i + 1);
        printf("Enter contact name: ");
        scanf(" %[^\n]", contacts[i].name); // To read string with spaces
        printf("Enter contact phone number: ");
        scanf("%d", &contacts[i].phone);
    }

    // Display the contact details
    printf("\nDisplaying contact details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nContact %d:\n", i + 1);
        printf("Name: %s\n", contacts[i].name);
        printf("Phone Number: %d\n", contacts[i].phone);
    }

    return 0;
}

/*
Explanation of the program:
- The program manages a contact list using structures to store information about each contact.
- It includes the following steps:
  - Defines a structure named 'Contact' with two members: name and phone.
  - Uses `#define MAX_CONTACTS 10` to define a constant for the maximum number of contacts.
    - This makes the code more readable and maintainable.
    - If you need to change the maximum number of contacts, you only need to modify the `#define` directive in one place.
  - Declares an array of structures to store multiple contact records.
  - Prompts the user to enter the number of contacts.
  - Reads the number of contacts from the user.
  - Uses a for loop to input details for each contact:
    - Prompts the user to enter the contact's name and phone number.
    - Uses scanf with a format specifier to read the name with spaces and the phone number as an integer.
  - Uses another for loop to display the contact details:
    - Prints the contact's name and phone number.
  - Returns 0 to indicate that the program executed successfully.
- The phone number is stored as an integer, which limits it to numeric values only and does not allow for special characters like hyphens, parentheses, or spaces.
*/