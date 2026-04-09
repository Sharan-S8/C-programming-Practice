#include <stdio.h>
void main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a>=1 && a<=100)
    {
        printf("The number is between 1 to 100");
    }
    else
    {
        printf("The number is not between 1 to 100");
    }
}