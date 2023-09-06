//using function to calculate the square of user given number
#include<stdio.h>
void square( int number)
{
    int ans;
    ans=number*number;
    printf("square= %d",ans);
}
void main()
{
    int num;
    printf("enter number= ",num);
    scanf("%d",&num);
    square(num);
}
    
