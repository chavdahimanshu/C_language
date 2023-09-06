//using function to claculate percentage of student mark of math,science and gujarati
#include<stdio.h>
float percentage(float mm,float sm,float gu)
{
    float percentage;
    percentage=((mm+sm+gu)/300) *100;
    printf("percetage=%f",percentage);
    
}
void main()
{
    float math,science,gujarati;
    printf("**********ALL SUBJECT MARK IS 100***********\n ");
    printf("ENTER MARK FOR MATH= ");
    scanf("%f",&math);
    printf("ENTER MARK FOR SCIENCE= ");
    scanf("%f",&science);
    printf("ENTER MARK FOR GUJARATI= ");
    scanf("%f",&gujarati);
    percentage(math,science,gujarati);
}