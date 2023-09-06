// ******
// *   *
// *  *
// * *
// **
// *
#include <stdio.h>
void main()
{
    int col1, col2,row,k;
    k=6;
    for(row=1;row<=6;row++)
     {
    // for (col2=1;col2<=k;col2++)
    // {
    // printf("");
    // }
    for (col1 = 1; col1 <= 6; col1++ )
      { 
        if(row==1 || col1==1 || col1==k)
        printf("*");
        else
        printf(" ");
    }
    //printf("_");
    //printf("_
    //printf("_");
    //printf("_");
    printf("\n");
    k--;
    }
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("\n");
}