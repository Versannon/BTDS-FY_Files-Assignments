#include <stdio.h>

int main() 
{
    int x, ans1, ans2; 
    x = 10;
    ans1 = x << 2; 
    ans2 = x >> 2; 
    /*
    1 :  Left Shift (`<<`):
    * - Shifts bits to the left, effectively multiplying the value by 2 for each shift position.
    * - Example: 1010 << 2 becomes 101000 (10 * 2 * 2 = 40)
    2 :  Right Shift (`>>`):
    * - Shifts bits to the right, effectively dividing the value by 2 for each shift position.
    * - Example: 1010 >> 2 becomes 0010 (10 / 2 / 2 = 2)
    */

  printf("x << 2 = %d\n", ans1); 
  printf("x >> 2 = %d\n", ans2);

  return 0;
}
