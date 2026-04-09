#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("The maximum number is %d",a);
        }
    }
    else if(b>a)
    {
        if(b>c)
        {
            printf("The maximum number is %d",b);
        }
    }
    else
    {
        printf("The maximum number is %d",c);
    }
}