#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
        if (tolower(str[i]) != tolower(str[len - i - 1]))
            return 0;
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("%s is %sa palindrome\n", str, isPalindrome(str) ? "" : "not ");
    return 0;
}