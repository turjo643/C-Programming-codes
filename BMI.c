#include<stdio.h>
int main()
{
    float weight,height,bmi;
    printf("Enter your weight(Kg) & height(m):");
    scanf("%f%f",&weight,&height);
    bmi=weight/(height*height);
    printf("Your BMI is=%.2f ",bmi);
    if(bmi<18.5)
    {
        printf("& you have an underweight");
    }
    else if((18.5<=bmi)&&(bmi<=24.99))
    {
        printf("& you have a normal weight");
    }
    else if((25.00<=bmi)&&(bmi<=29.99))
    {
        printf("& you have an overweight");
    }
    else if((30.0<=bmi)&&(bmi<=34.99))
    {
        printf("& you have a obesity of Class 1");
    }
    else if((35.0<=bmi)&&(bmi<=39.99))
    {
        printf("& you have a obesity of class 2");
    }
    else
    {
        printf("& you have a obesity of Class 3");
    }
    return 0;
}
