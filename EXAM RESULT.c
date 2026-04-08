#include <stdio.h>
void main()
{
    int a;
    printf("Enter the marks of the three subjects: ");
    scanf("%d",&a);
    if(a>=90) 
    {
        printf("Grade S");
    }
    else if(a>=80)
    {
        printf("Grade A");
    }
    else if(a>=70)
    {
        printf("Grade B");
    }
    else if(a>=60)
    {
        printf("Grade C");
    }
    else if(a>=50)
    {
        printf("Grade D");  
    }
    else
    {
        printf("Fail");
    }
}