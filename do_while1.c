/*
---using do while loop -----

 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000
 */
#include<stdio.h>
void main()
{
    int num,temp;
    num=0;
    temp=1;
    printf("%d,",num);
    do
    {
    num=num+temp;
    printf("%d,",num);
    temp++;
    } while (num<900);
    
    //num=num+1;
    //printf("%d,",num);
    // num=num+2;
    // printf("%d,",num);
    // num=num+3;
    // printf("%d,",num);
    // num=num+4;
    // printf("%d,",num);
    // num=num+5;
    // printf("%d,",num);
    // num=num+6;
    // printf("%d,",num);
    // num=num+7;
    // printf("%d,",num);

}


