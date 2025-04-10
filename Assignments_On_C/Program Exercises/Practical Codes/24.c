#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}

/*
Explanation of the program:
- The program counts the number of vowels and consonants in a string.
- It includes the following steps:
  - Declares a character array to store the input string.
  - Declares two integer variables to count the number of vowels and consonants.
  - Prompts the user to enter a string.
  - Uses the fgets function to read the input string from the user.
  - Uses a for loop to iterate through each character of the string:
    - Converts the character to lowercase using the tolower function.
    - Checks if the character is an alphabet letter (between 'a' and 'z').
    - If the character is a vowel (a, e, i, o, u), increments the vowel count.
    - If the character is a consonant, increments the consonant count.
  - Prints the number of vowels and consonants.
  - Returns 0 to indicate that the program executed successfully.
*/