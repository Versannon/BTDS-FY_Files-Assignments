//here is the code to print a 5-tall pyramid
#include <stdio.h>
int main() 
{
    int n,i,j,k;
    n=7;
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n - i - 1; j++)
        /*
        The j<n-i-1 calculates the number of spaces needed before putting an '*'
        As i increases, the number of spaces decrease.
        */
        {
            printf(" ");
        }  
        // Printing asterisks with spaces in between
        for (k = 0; k <= i; k++) 
        {
            printf("* ");
        }        
        //printing the next row
        printf("\n");
    }
    return 0;
}
