#include <stdio.h>
void main()
{
    int a;
    printf("Enter the amount: ");
    scanf("%d",&a);
    if(a>=1000)
    {
        printf("Eligible for discount");
    }
    else
    {
        printf("Not eligible for discount");
    }
}