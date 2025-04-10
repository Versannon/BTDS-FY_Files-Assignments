#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	char str1[]= "Apple";
    char str2[]= "apple";
    int result = strcmp(str1,str2); //Compare Strings
    if (result<0)
    {
        printf("'%s' is not same as '%s' \n",str1,str2);
    }
    else
    {
        printf("They Are Same: %s == %s", str1,str2);
    }
	return 0;
}