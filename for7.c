//10=1+2+3+4+5+6+7+8+9+10=?
#include <stdio.h>
void main()
{
    int num1,ans,num2,number;
    num1=1;
    num2=1;
    printf("enter number=");
    scanf("%d",&number);
    printf("%d+",num1);
    for (num2=1;num2<number;num2++)
    {
    num1=num1+1;
    printf("%d+",num1);
    ans=(num1*(num1+1))/2;
    }
    //ans=num1*(num1-1)/2;
    printf("=%d",ans);


    // printf("%d+",num1);
    // num1=num1+1;
    // printf("%d+",num1);
    // num1=num1+1;
    // printf("%d+",num1);
    // num1=num1+1;
    // printf("%d+",num1);
}

