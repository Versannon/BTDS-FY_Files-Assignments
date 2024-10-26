#include <stdio.h>

int main()
{
    int x,y,a,b;
    x=19;
    y=29;
    a=x++;
    b=y--;
    printf("x = 19\n");
    printf("After increment x = %d\n",x++);
    printf("y = 29\n");
    printf("After Decrement y = %d\n",y--);
    return 0;
}