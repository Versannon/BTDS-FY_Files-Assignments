#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Books
{
	char Title[50];
	char Author[50];
	int Id;
	int Price;
};

int main()
{
	int num;
	struct Books Book1;
	{
		printf("Give Book 1 Title: \n");
        scanf("%s",&Book1.Title);
		printf("Give Book 1 Author: \n");
        scanf("%s",&Book1.Author);
		printf("Give Book 1 Id: \n");
        scanf("%d",&Book1.Id);
		printf("Give Book 1 Price: \n");
        scanf("%d",&Book1.Price);
	};
	printf("Enter The Book Id :",num);
	scanf("%d",&num);
	if (num==142)
	{
		printf("Book Id : %d \n",Book1.Id);
		printf("Book Title : %s \n",Book1.Title);
		printf("Book Author : %s \n",Book1.Author);
		printf("Book Price : %f /-",Book1.Price);
	}
	else
	{
		printf("The Id you entered is Incorrect");
	}
	return 0;
}