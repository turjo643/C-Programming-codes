#include<stdio.h>
int main()
{
    float k,c,f;
    printf("Enter temperature in K:");
    scanf("%f",&k);
    c=k-273;
    printf("Temperature is %f C",c);
    f=(((k-273)/5)*9)+32;
    printf(" & %f F",f);
    return 0;
}
