#include<stdio.h>
float main()
{

   float f,c=0;
   printf("Enter temperature in F:");
   scanf("%f",&f);
   c=((f-32)/9)*5;
   printf("Temperature is %f C",c);
   return 0;
}

