//Here we will print a table of the number given by the user
#include <stdio.h>
int main() 
{
    int num,i,tbl;
    printf("Enter a Number To generate it's Table: ");
    scanf("%d",&num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n",num,i,num*i);
    }
	return 0;
}