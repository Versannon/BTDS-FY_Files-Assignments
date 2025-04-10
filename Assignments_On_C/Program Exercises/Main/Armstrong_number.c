//For Numbers upto 3 digits
#include <stdio.h>
int main()
{
    int num, r, result=0,n;
    printf("Enter a number: ");
    scanf("%d", &num);
    n=num;
    while (num != 0)
    {
        r = num % 10;
        result += r * r * r;
        num /= 10;
    }
    if (result == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
    return 0;
}