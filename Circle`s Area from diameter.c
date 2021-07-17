#include<stdio.h>
#define pi 3.1416
int main()
{

   int d,area=0;
   printf("Enter diameter:");
   scanf("%d",&d);
   area=pi*(d/2)*(d/2);
   printf("Area=%d",area);
   return 0;

}
