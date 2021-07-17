#include<stdio.h>
int main()
{
    float f,k;
    printf("Enter temperature in F:");
    scanf("%f",&f);
    k=(((f-32)/9)*5)+273;
    printf("Temperature is %f K",k);
    return 0;
}

