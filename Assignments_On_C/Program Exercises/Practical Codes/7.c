#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 0;

    // Prompt the user to enter a string
    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate the length of the string
    len = strlen(str);

    // Check if the string is a palindrome
    for (i = 0; i < len / 2; i++) {
        // Compare characters from the beginning and the end
        if (str[i] != str[len - i - 1]) {
            flag = 1; // Set flag if characters do not match
            break;
        }
    }

    // Print the result based on the flag
    if (flag)
        printf("%s is not a palindrome.\n", str);
    else
        printf("%s is a palindrome.\n", str);

    return 0;
}