#include<stdio.h>
int main()
{
    int x,y,a,b;
    x=100;
    y=40;
    a=x*y;
    b=a+a/8000;
    /*Grouping is also included because i don't exactly know what the 
    grouping operator is used for*/
    printf("%d",b);
    return 0;
}