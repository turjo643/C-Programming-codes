#include<stdio.h>
int main()
{
    float c,k;
    printf("Enter temperature in C:");
    scanf("%f",&c);
    k=273-c;
    printf("Temperature is %f K",k);
    return 0;
}

