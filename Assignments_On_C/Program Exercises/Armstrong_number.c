#include <stdio.h>
int main()
{
    int num, r, result=0,n;
    printf("Enter a number: ");
    scanf("%d", &num);
    n=num;
    result = num;
    while (num != 0)
    {
        r = num % 10;
        result = result * r * r * r;
        num = num / 10;
    }
    if (result == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
    return 0;
}