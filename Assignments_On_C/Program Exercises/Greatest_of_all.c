#include <stdio.h>
int main() 
{
    int x,y,z;
    printf("Enter 1st number :");
    scanf("%d",&x);
    printf("Enter 2nd number :");
    scanf("%d",&y);
    printf("Enter 3rd number :");
    scanf("%d",&z);
    if (x>y && x>z)
    {
        printf("x (%d) is Greater than y (%d) and z (%d) : ",x,y,z);
    }
    else if (y>x && y>z)
    {
        printf("y (%d) is Greater than x (%d) and z (%d) : ",y,x,z);
    }
    else if (z>x && z>y)
    {
        printf("z (%d) is Greater than y (%d) and x (%d) : %d",z,y,x);
    }
	return 0;
}