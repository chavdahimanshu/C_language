//1 , 4, 9 , 16 ....10000
#include<stdio.h>
void main()
{
    int num1=1, h=1;
    printf("%d,",num1);
    while(num1<10000)
    {
    h=h+2;
    num1=num1+h;
    printf("%d,",num1);
    }
    //h=h+2;
    //num1=num1+h;
    //printf("%d,",num1);
    //h=h+2;
    //num1=num1+h;
    //printf("%d,",num1);
    //h=h+2;
    //num1=num1+h;
    //printf("%d,",num1);

}