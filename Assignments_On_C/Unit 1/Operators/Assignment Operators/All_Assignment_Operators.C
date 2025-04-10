#include <stdio.h>

int main() 
{
  int x = 40;

  x = 10;
  printf("x = %d\n", x);

  x += 10;
  printf("x = %d\n", x);

  x -= 10;
  printf("x = %d\n", x);

  x *= 4;
  printf("x = %d\n", x);

  x /= 4;
  printf("x = %d\n", x);

  x %= 9;
  printf("x = %d\n", x);

  x &= 9;
  printf("x = %d\n", x);

  x |= 10;
  printf("x = %d\n", x);

  x ^= 10;
  printf("x = %d\n", x);

  x <<= 4;
  printf("x = %d\n", x);

  x >>= 1;
  printf("x = %d\n", x);
  /*
  * Assignment Operators in C:
  *
  * - `=`: Simple assignment. Assigns the value on the right to the variable on the left.
  * - `+=`: Add and assign. Adds the right operand to the left operand and assigns the result to the left operand.
  * - `-=`: Subtract and assign. Subtracts the right operand from the left operand and assigns the result to the left operand.
  * - `*=`: Multiply and assign. Multiplies the left operand by the right operand and assigns the result to the left operand.
  * - `/=`: Divide and assign. Divides the left operand by the right operand and assigns the result to the left operand.
  * - `%=`: Modulus and assign. Calculates the remainder of the division of the left operand by the right operand and assigns the result to the left operand.
  * - `&=`: Bitwise AND and assign. Performs a bitwise AND operation on the left and right operands and assigns the result to the left operand.
  * - `|=`: Bitwise OR and assign. Performs a bitwise OR operation on the left and right operands and assigns the result to the left operand.
  * - `^=`: Bitwise XOR and assign. Performs a bitwise XOR operation on the left and right operands and assigns the result to the left operand.
  * - `<<=`: Left shift and assign. Shifts the bits of the left operand to the left by the number of positions specified by the right operand and assigns the result to the left operand.
  * - `>>=`: Right shift and assign. Shifts the bits of the left operand to the right by the number of positions specified by the right operand and assigns the result to the left operand.
  */

  return 0;
}
