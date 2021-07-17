#include<stdio.h>
int main()
{
int i,n,s;
printf("Enter the last number:");
scanf("%d",&n);
s=0;
i=1;
while(i<=n)
    {
        i++;
        s=s+i;
    }
printf("Sum is =%d",s);
return 0;
}
