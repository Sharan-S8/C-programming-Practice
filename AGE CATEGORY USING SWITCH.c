#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter the age: ");
    scanf("%d",&a);
    if (a<=12)
    {
        b=1;
    }
    else if (a>=13 && a<=19)
    {
        b=2;
    }
    else if (a>=20 && a<=30)
    {
        b=3;
    }
    else if (a>=31 && a<=50)
    {
        b=4;
    }
    else if (a>=51 && a<=100)
    {
        b=5;
    }
    switch(b)
    {
        case 1:
            printf("You are a child");
            break;
        case 2:
            printf("You are a teenager");
            break;
        case 3:
            printf("You are an adult");
            break;
        case 4:
            printf("You are a senior citizen");
            break;
        case 5:
            printf("You are a senior citizen");
            break;
        default:
            printf("PRACITALLY DEAD");
    }
}
