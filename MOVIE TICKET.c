#include <stdio.h>
void main()
{
    int age,price;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age<18)
    {
        price=100;
    }
    else
    {
        price=200;
    }
    printf("The price of the ticket is %d",price);
}