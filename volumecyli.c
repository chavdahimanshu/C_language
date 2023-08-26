#include<stdio.h>
void main()
{
    float radius=0, height=0;
    float  pi=3.14;
    float area=0;
    printf("enter the value of radius");
    scanf("%f",&radius);
    printf("enter the value of height");
    scanf("%f",&height);
    area=3.14*(radius*radius)*height;
    printf("volume of cylinder is %f",area);

}