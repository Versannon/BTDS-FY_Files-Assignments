/*Write a C program to display a pattern like a right-angled triangle using asterisks
(*). Also, explain the logic of the program.*/

#include<stdio.h>

int main()
{
    int i,j,num;
    printf("Enter The Number Of Rows: ");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
/*
1: declaring the variables i,j,num.
2: using the printf and scanf function to prompt the user to enter the number of rows.
3: using the for loop to iterate through the rows.
4: first for loop is used to iterate through the rows and has
the \n character to move to the next line after each iteration.
5: the second for loop is used to print the asterisks in each row.
6: the printf function there is used to print the asterisks.
7: the program returns 0 to indicate that the program executed successfully.
*/