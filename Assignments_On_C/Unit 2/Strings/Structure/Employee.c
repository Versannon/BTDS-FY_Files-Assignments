#include <stdio.h>
    #include <string.h>

    struct Employee
    {
        char name[200];
        char emailadd[200];
        int phoneno[200];
        int age[2];
        char bg[3];

    };

    int main()
    {

        struct Employee emp1,emp2;

        printf("Enter your name:");
        scanf("%s",emp1.name);
        printf("Enter your email address:");
        scanf("%s",emp1.emailadd);
        printf("Enter your Phone Number (10 digits):");
        scanf("%d",emp1.phoneno);
        printf("Enter your Age:");
        scanf("%d",emp1.age);
        printf("Enter your Blood Group:");
        scanf("%s",emp1.bg);

        printf("Enter your name:");
        scanf("%s",emp2.name);
        printf("Enter your email address:");
        scanf("%s",emp2.emailadd);
        printf("Enter your Phone Number (10 digits):");
        scanf("%d",emp2.phoneno);
        printf("Enter your Age:");
        scanf("%d",emp2.age);
        printf("Enter your Blood Group:");
        scanf("%s",emp2.bg);

        printf("\nHere are your all details: \n");

        printf("\nEmployee 1: \n");

        printf("\nName: %s\n",emp1.name);
        printf("Email Address: %s\n",emp1.emailadd);
        printf("Phone Number: %d\n",emp1.phoneno);
        printf("Age: %d\n",emp1.age);
        printf("Blood Group: %s\n",emp1.bg);

        printf("\nEmployee 2: \n");

        printf("\nName: %s\n",emp2.name);
        printf("Email Address: %s\n",emp2.emailadd);
        printf("Phone Number: %d\n",emp2.phoneno);
        printf("Age: %d\n",emp2.age);
        printf("Blood Group: %s\n",emp2.bg);

        return 0;
        }