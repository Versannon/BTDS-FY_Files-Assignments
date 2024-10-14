#include<stdio.h>
int main()
{
    int x,y,mod;
    x=16;
    y=3;
    mod=x%y;
    /*Here If you change the value of y the remainder will change accordingly
    e.g., if x=16 and y=3, modulus will come out 1.*/
    printf("%d",mod);
    return 0;
}