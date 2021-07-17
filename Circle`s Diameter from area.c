#include<stdio.h>
int main()
{
    float d,a;
    printf("Enter area:");
    scanf("%f",&a);
    d=sqrt(a/3.1416)*2;
    printf("Diameter=%.2f",d);
    return 0;
}

