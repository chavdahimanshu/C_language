// Example of Function
// Write a programe to peform addition of 2 variable
#include<stdio.h>
void getadd(int h1, int h2)
{
    int ans=0;
    ans=h1+h2;
    printf("the answer is %d",ans);
}
void main()
{
    int num1,num2;
    printf("enter num1= ");
    scanf("%d",&num1);
    printf("enter num2= ");
    scanf("%d",&num2);

    getadd(num1,num2);


}