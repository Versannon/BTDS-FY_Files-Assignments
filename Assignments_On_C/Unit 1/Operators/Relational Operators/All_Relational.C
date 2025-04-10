#include<stdio.h>

int main()
{
    int x,y;
    x=10;
    y=20;
    printf("If 0 then 'False' And if 1 then 'True'\n\n\n");
    //First is less than
    printf("x < y : %d\n",x<y);
    //Greater than
    printf("x > y : %d\n",x>y);
    //Less Than or Equal to
    printf("x <= y : %d\n",x<=y);
    //Greater than Or Equal To
    printf("x >= y : %d\n",x>=y);
    //Equal to
    printf("x == y : %d\n",x==y);
    //Not Equal to
    printf("x != y : %d\n",x!=y);
    return 0;
}