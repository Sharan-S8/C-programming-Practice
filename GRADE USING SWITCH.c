#include <stdio.h>
void main()
{
    int a;
    printf("Enter the grade: ");
    scanf("%d",&a);
    switch(a/10)
    {
        case 10:
            printf("A");
            break;
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        case 5:
            printf("F");
            break;
        default:
            printf("Fail");
    }
}