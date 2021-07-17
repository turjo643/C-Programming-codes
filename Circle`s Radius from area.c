#include<stdio.h>
int main()
{
    float a,r;
    printf("Enter area:");
    scanf("%f",&a);
    r=sqrt(a/3.1416);
    printf("Perimeter=%.2f",r);
    return 0;
}
