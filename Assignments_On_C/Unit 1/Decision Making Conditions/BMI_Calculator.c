#include<stdio.h>
int main()
{
    float h,w,BMI;
    printf("Enter Weight in kg:");
    scanf("%f",&w);
    printf("Enter Height in metres:");
    scanf("%f",&h);
    BMI = w/(h*h);
    printf("Your Body Mass Index is : %f\n\nAlso, Your BMI category is:",BMI);
    if (BMI<15)
    {
        printf("Starvation");
    }
    else if(BMI<=17.5 && BMI>=15.1)
    {
        printf("Anorexic");
    }
    else if(BMI<=18.5 && BMI >= 17.6)
    {
        printf("Underweight");
    }
    else if(BMI<=24.9 && BMI >= 18.6)
    {
        printf("Ideal");
    }
    else if(BMI<=25.9 && BMI >= 25)
    {
        printf("Overweight");
    }
    else if(BMI<=30.9 && BMI >= 30)
    {
        printf("Obese");
    }
    else if(BMI >= 40)
    {
        printf("Morbidly Obese");
    }
    return 0;
}