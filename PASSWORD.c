#include <stdio.h>
void main()
{
    int a;
    printf("Enter the 4 digit number password: ");
    scanf("%d",&a);
    if(a==6767)
    {
        printf("CORRECT PASSWORD UNLOCKED");
    }
    else
    {
        printf("INCORRECT PASSWORD");
    }
}