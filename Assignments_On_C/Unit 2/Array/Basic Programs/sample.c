#include <stdio.h>

int main() {
    int marks[30];
    int i, sum = 0;
    float average;

    // Get marks for each student
    printf("Enter marks for 30 students:\n");
    for (i = 0; i < 30; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Calculate the sum of all marks
    for (i = 0; i < 30; i++) {
        sum += marks[i];
    }

    // Calculate the average
    average = (float)sum / 30;

    // Print the average
    printf("Average marks of the class: %.2f\n", average);

    return 0;
}
