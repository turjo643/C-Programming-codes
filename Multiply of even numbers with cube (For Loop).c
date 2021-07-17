#include<stdio.h>
int main()
{
    int i,n,s;
    printf("Enter the last number:");
    scanf("%d",&n);
    s=1;
    for(i=2;i<=n;i+=2)
        s=s*i*i*i;
    printf("Multiply is:%d",s);
    return 0;
}

