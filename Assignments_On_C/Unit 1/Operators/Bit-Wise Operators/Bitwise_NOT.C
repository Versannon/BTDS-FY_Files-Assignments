#include <stdio.h>

int main() 
{
    int x,ans;
    x = 10;
    ans = ~x;
    printf("x = 10\n");
    printf("~x = %d\n", ans); 
    return 0;
    /*
    Here,
    1 : Bits for x = 10 is (1010) and '~' flips the bits.
    2 : Thus the flipped bits are 0101.
    3 : Adding 1 gives us 0110, which is the two's complement representation of -11.
    */
}
