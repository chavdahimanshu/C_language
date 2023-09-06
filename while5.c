//1 , 4, 9 , 16 ....10000
#include<stdio.h>
void main()
{
    int num1=1, num2=1;
    printf("%d,",num1);
    while(num2<100)
    {
    num2=num2+1;
    num1=num2*num2;
    printf("%d,",num1);
    }
   // num2=num2+1;
   // num1=num2*num2;
   // printf("%d,",num1);
   // num2=num2+1;
   // num1=num2*num2;
   // printf("%d,",num1);
   // num2=num2+1;
   // num1=num2*num2;
    //printf("%d,",num1);
    //num2=num2+1;
    //num1=num2*num2;
    //printf("%d,",num1);
}