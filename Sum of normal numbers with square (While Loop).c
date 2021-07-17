#include<stdio.h>
int main()
{
    int i,n,s;
    printf("Enter the last number:");
    scanf("%d",&n);
    s=0;
    for(i=1;i<=n;i++)
        s=s+i*i;
    printf("Sum is:%d",s);
    return 0;
}
