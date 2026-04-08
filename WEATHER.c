#include <stdio.h>
void main()
{
    int temp;
    printf("Enter the temperature: ");
    scanf("%d",&temp);
    if(temp<0)
    {
        printf("Freezing");
    }
    else if(temp<10)
    {
        printf("Cold");
    }
    else if(temp<20)
    {
        printf("Warm");
    }
    else
    {
        printf("Hot");
    }
}