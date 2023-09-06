/*
* * * * *
 *     *
  *   *
   * *
    * 
*/
#include<stdio.h>
void main()
{
    int col1, col2, row,k;
    k=5;
    for(row=1;row<=5;row++ )
    {
    for (col1=1;col1<=row;col1++)
    {
    printf(" ");
    }
    for(col2=1;col2<=k;col2++)
    {
      if(col2==1 || row==1 || col2==k) 
      {
    printf("* ");
    } 
      else
    {
    printf("  ");  
    }  
    }
    printf("\n");
    k--;
    }




    // printf("*");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("_");
    // printf("_");
    // printf("_");
    // printf("_");

}

