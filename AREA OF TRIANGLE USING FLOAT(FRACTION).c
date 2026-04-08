#include <stdio.h>
void main()
{
    float base,height,area;
    printf("Enter the base and height of the triangle: ");
    scanf("%f %f",&base,&height);
    area=(1/2.0)*base*height;
    printf("The area of the triangle is %.2f",area);
}   