#include<stdio.h>
int main()
{
    float k,f;
    printf("Enter temperature in K:");
    scanf("%f",&k);
    f=(((k-273)/5)*9)+32;
    printf("Temperature is %f F",f);
    return 0;
}

