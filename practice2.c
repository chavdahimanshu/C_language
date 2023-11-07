// Write a programe to findout millineum year 
#include<stdio.h>
void main()
{
int year;
printf("enter year=");
scanf("%d",&year);
if (year%1000==0)
{
printf("this year is millineum year");
}
else
{
    printf("Not millineum year");
}
}