#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("%s is a palindrome.\n", str);
    else
        printf("%s is not a palindrome.\n", str);

    return 0;
}

/*
Explanation of the program:
- The program checks if a given string is a palindrome.
- It includes the following steps:
  - Declares variables to store the string, loop counter, length of the string, and a flag.
  - Prompts the user to enter a string.
  - Reads the string from the user.
  - Calculates the length of the string using `strlen`.
  - Uses a for loop to compare characters from the beginning and the end of the string:
    - If characters do not match, sets the flag and breaks the loop.
  - Checks the flag to determine if the string is a palindrome:
    - If the flag is 0, prints that the string is a palindrome.
    - If the flag is 1, prints that the string is not a palindrome.
  - Returns 0 to indicate that the program executed successfully.
*/