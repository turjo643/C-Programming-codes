#include<stdio.h>
int main()
{
    int i,n,s;
    printf("Enter the last number:");
    scanf("%d",&n);
    s=1;
    for(i=1;i<=n;i++)
        s=s*i*i;
    printf("Multiply is:%d",s);
    return 0;
}
