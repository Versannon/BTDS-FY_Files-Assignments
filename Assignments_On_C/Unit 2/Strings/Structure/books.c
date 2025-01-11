#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Books
{
	char Title[50];
	char Author[50];
	int Id;
	float Price;
};

int main()
{
	int num;
	struct Books Book1;
	{
		strcpy(Book1.Title,"C Programming");
		strcpy(Book1.Author,"Charlie K");
		Book1.Id=142;
		Book1.Price=150;
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