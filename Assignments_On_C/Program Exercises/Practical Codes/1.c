#include <stdio.h>

int main() {
    int sub1, sub2, sub3, sub4, sub5, total;
    float pmarks;

    // Prompt the user to enter the marks obtained in 5 subjects
    printf("Enter the marks obtained by the student in 5 subjects:\n");
    printf("Subject 1: ");
    scanf("%d", &sub1);
    printf("Subject 2: ");
    scanf("%d", &sub2);
    printf("Subject 3: ");
    scanf("%d", &sub3);
    printf("Subject 4: ");
    scanf("%d", &sub4);
    printf("Subject 5: ");
    scanf("%d", &sub5);

    // Calculate the total marks obtained
    total = sub1 + sub2 + sub3 + sub4 + sub5;

    // Calculate the percentage marks
    pmarks = (total / 500.0) * 100;

    // Print the percentage marks obtained
    printf("The percentage marks obtained by the student is: %.2f\n", pmarks);

    return 0;
}