#include<stdio.h>
void main()
{
    int row,colum,temp,num;
    temp=1;
    printf("enter numer= ");
    scanf("%d",&num);

    for(colum=1 ; colum<=num ; colum++)
    {
    for(row= 1; row<=temp; row++ )
    {    
    printf("* ");
    }
    printf("\n");
    temp++;
    }
    /*
    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    for(row= 0; row<=5; row++ )
    {    
    printf("* ");
    }
    printf("\n");
    for(row= 0; row<=5; row++ )
    {    
    printf("* ");
    }
    printf("\n");
    for(row= 0; row<=5; row++ )
    {    
    printf("* ");
    }
    printf("\n");for(row= 0; row<=5; row++ )
    {    
    printf("* ");
    }
    printf("\n");

    */
    
    
}