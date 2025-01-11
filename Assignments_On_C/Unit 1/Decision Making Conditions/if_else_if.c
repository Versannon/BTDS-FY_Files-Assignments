#include <stdio.h>

int main() {
  int grade;

  printf("Enter your grade: ");
  scanf("%d", &grade); // Get the grade from the user

  if (grade >= 90) {
    printf("A\n");
  } else if (grade >= 80) {
    printf("B\n");
  } else if (grade >= 70) {
    printf("C\n");
  } else {
    printf("D\n");
  }

  return 0;
}
