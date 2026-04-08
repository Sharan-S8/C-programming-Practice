#include <stdio.h>
void main()
{
    int age,b;
    printf("Enter your age: ");
    scanf("%d",&age);
    b=18-age;
    if(age>=18)
    {
        printf("Eligible for voting");
    }
    else
    {
        printf("Not eligible for voting\nYou have to wait for %d years",b);
    }
}