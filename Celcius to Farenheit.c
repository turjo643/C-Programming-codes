#include<stdio.h>
float main()
{

   float c,f=0;
   printf("Enter temperature in C:");
   scanf("%f",&c);
   f=((c/5)*9)+32;
   printf("Temperature is %f F",f);
   return 0;
}
