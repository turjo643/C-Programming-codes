#include<stdio.h>
#define pi 3.1416
int main()
{

   int r,area=0;
   printf("Enter radius:");
   scanf("%d",&r);
   area=pi*r*r;
   printf("Area=%d",area);
   return 0;

}
