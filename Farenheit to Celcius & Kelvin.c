#include<stdio.h>
float main()
{

   float f,k,c=0;
   printf("Enter temperature in F:");
   scanf("%f",&f);
   c=((f-32)/9)*5;
   printf("Temperature is %f C",c);
   k=(((f-32)/9)*5)+273;
   printf(" & %f K",k);
   return 0;
}
