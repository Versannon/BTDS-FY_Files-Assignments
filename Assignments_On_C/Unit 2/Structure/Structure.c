#include <stdio.h>
#include <string.h>

struct student {
    char name[100];
    int roll_no;
    int marks;
};

int main() {
    struct student students[5];

    for (int i = 0; i < 5; i++) 
    {
        printf("Enter the name of student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        //students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove trailing newline

        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &students[i].roll_no);

        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);

        getchar(); // Clear the newline character left by scanf
    }

    printf("\nDetails of the students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: Name: %s, Roll No: %d, Marks: %d\n", i + 1, students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}