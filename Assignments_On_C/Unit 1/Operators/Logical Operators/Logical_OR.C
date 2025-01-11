#include<stdio.h>
/*Since Logical Operators work best in
a "if else" statement
I will use if else to show Logical OR type.*/
int main() 
{
    int x = 5;
    int y = 0;
    if (x == 0 || y == 0) {
        printf("At least one of the numbers is equal to 0.\n");
    } else {
        printf("Neither of the numbers is equal to 0.\n");
    }

    return 0;
}
