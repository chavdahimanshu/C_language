#include<stdio.h>
void printline(char symbol,int size)
{
    int temp=0;
    
    for(temp=0;temp<=size;temp++)
    {
    printf("%c",symbol);
    
    }
}
void main()

{
printline('*',30);
printf("\nhimanshu chavada\n");
printline('%',30);

}