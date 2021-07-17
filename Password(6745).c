#include<stdio.h>
int main()
{
    int pass,a;
    printf("Enter your Password : ");
    scanf("%d",&a);
    pass=a+0;
    printf("Matching with : %d\n",pass);
    if((6744<=pass)&&(pass<=6746))
    {
        printf("Your password is correct. Welcome.");
    }
    else
    {
        printf("Your password is incorrect. Try again.");
    }
    return 0;
}
