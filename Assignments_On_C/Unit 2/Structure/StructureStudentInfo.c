#include <stdio.h>
#include <string.h>

struct student {
    char name[100];
    int rl;
    char Div[10];
    int marks;
};

int main() {
    struct student s;

    printf("Enter the name of the student: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter the roll number of the student: ");
    scanf("%d", &s.rl);

    printf("Enter the division of the student: ");
    scanf("%s", s.Div);

    printf("Enter the marks of the student: ");
    scanf("%d", &s.marks);

    printf("\nDetails of the student:\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.rl);
    printf("Division: %s\n", s.Div);
    printf("Marks: %d\n", s.marks);

    return 0;
}