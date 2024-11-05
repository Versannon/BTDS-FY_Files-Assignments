#include <stdio.h>

int main() {
  int grade = 80;

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