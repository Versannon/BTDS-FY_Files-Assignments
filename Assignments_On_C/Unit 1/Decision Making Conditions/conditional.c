#include <stdio.h>

int main() {
  int number, result;

  printf("Enter a number: ");
  scanf("%d", &number);
  result = (number % 2 == 0) ? 1 : 0;

  printf("The number is %s.\n", (result == 1) ? "even" : "odd");

  return 0;
}