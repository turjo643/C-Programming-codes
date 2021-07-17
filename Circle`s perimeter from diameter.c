#include<stdio.h>
int main()
{
    float d,p;
    printf("Enter diameter:");
    scanf("%f",&d);
    p=2*3.1416*(d/2);
    printf("Perimeter=%.3f",p);
    return 0;
}

