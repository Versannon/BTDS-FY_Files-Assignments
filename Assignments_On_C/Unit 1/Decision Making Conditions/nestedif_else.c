#include <stdio.h>

int main() {
  int score = 85;

  if (score >= 90) {
    if (score >= 95) {
      printf("Excellent!\n");
    } else {
      printf("Very good!\n");
    }
  } else {
    printf("Good job!\n");
  }

  return 0;
}