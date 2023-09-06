/*
 1
 12
 123
 1234
 12345
 */
#include<stdio.h>
void main()

{
    int num,temp;
    num=1;
    temp=0;
    while(temp<=5)
    {
    while(num<=temp)
    {
   printf("%d",num);
   num++;
   printf("\n ") ;
    }
    temp++;
    }
    
   //printf("1 2 ");

    /*int num1,num2;
    num1=1;
    printf(" %d",num1+0);
    printf("\n ");
    printf("%d %d ",num1,num1+1);
    printf("\n ");
    printf("%d %d %d ",num1,num1+1,num1+2);
    printf("\n ");
    printf("%d %d %d %d ",num1,num1+1,num1+2,num1+3);
    printf("\n ");
    printf("%d %d %d %d %d ",num1,num1+1,num1+2,num1+3,num1+4);
    printf("\n ");
    */



}