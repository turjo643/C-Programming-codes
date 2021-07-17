#include<stdio.h>
float main()
{

   float c,k,f=0;
   printf("Enter temperature in C:");
   scanf("%f",&c);
   f=((c/5)*9)+32;
   printf("Temperature is %f F",f);
   k=273-c;
   printf(" & %f K",k);
   return 0;
}
