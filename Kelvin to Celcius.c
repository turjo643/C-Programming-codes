#include<stdio.h>
int main()
{
    float k,c;
    printf("Enter temperature in K:");
    scanf("%f",&k);
    c=k-273;
    printf("Temperature is %f C",c);
    return 0;
}

