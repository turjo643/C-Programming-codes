#include<stdio.h>
int main()
{
int i,n,s;
printf("Enter the last number:");
scanf("%d",&n);
s=0;
i=2;
while(i<=n)
    {
        i+=2;
        s=s*i*i*i;
    }
printf("Sum is =%d",s);
return 0;
}
