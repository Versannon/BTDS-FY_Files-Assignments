#include <stdio.h>

// Function to calculate the power of a number
int power(int base, int exp) {
    int result = 1;
    while (exp--) result *= base;
    return result;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int Onum = num, remainder, n = 0, result = 0;
    for (int temp = num; temp; temp /= 10, n++);
    while (Onum) {
        remainder = Onum % 10;
        result += power(remainder, n);
        Onum /= 10;
    }
    return result == num;
}

int main() {
    int num;
    printf("Enter an integer between 1 and 99: ");
    scanf("%d", &num);
    if (num < 1 || num > 99) {
        printf("Please enter a number between 1 and 99.\n");
        return 1;
    }
    printf("%d is %san Armstrong number.\n", num, isArmstrong(num) ? "" : "not ");
    return 0;
}