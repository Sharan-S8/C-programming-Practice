#include <stdio.h>
void main()
{
    int a, i=1, fact = 1;
    char b;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("CHOOSE THE OPERATION (s for sq, c for cube, f for factorial): ");
    scanf(" %c",&b);
    switch(b)
    {
        case 's':
            printf("%d",a*a);
            break;
        case 'c':
            printf("%d",a*a*a);
            break;
        case 'f':
            while(i<=a) {
                fact = fact * i;
                i++;
            }
            printf("%d",fact);
            break;
        default:
            printf("Invalid operator");
    }
}