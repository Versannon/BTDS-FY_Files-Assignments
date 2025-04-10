#include <stdio.h>

int main() 
{
    int a,b,ans;
    a = 10;
    b = 5;
    ans = a | b;
    /*
    Since a=10 has binary "1010" and b=5 has binary "0101"
    And bitwise a | b gives Binary "1111"
    Thus we will get output as "15".
    */
    printf("a | b = %d\n", ans); 
    return 0;
}
