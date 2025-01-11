#include <stdio.h>

int main() 
{
    int x,y,ans;
    x = 10;
    y = 5;
    ans = x ^ y;
    /*
    Here,
    1: binary for 10 is 1010.
    2: binary for 5 is 0101.
    3: by XOR '^', x^y gives 1111
    4: binary for 1111 is 15
    */
    printf("x ^ y = %d\n", ans); 
    return 0;
}
