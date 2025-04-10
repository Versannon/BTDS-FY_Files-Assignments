#include <stdio.h>
#include <stdlib.h>
int main() 
{
    char name[]="BTDS-FY Class";
	int i=0;
	while (name[i]!='\0')
	{
		printf("%c",name[i]);
		i++;
	}
	printf("\n");
	return 0;
}