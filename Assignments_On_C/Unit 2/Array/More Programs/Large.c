//This code finds The Largest number present in the (5 x 5)Matrix
#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int i,j,big;
    int a[5][5]={{2,4,6,1,9},{9,8,7,66,55},{99,86,13,0,5},{12,25,36,47,58},{23,34,56,13,69}};
    big=a[0][0];
    for ( i = 0; i <= 4; i++)
    {
        for(j = 0 ; j <= 4; j++)
        {
            if (a[i][j]>big)
            big=a[i][j];
        }
    }
    printf("\n Largest Number in this matrix is :\n\n %d",big);		
	return 0;
}