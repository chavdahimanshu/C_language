//example of function
#include<stdio.h>
void printline(char symbol, int size)
{
    int i=0;
    for(i=0;i<=size;i++)
    {
    printf("%c",symbol);
    }
}
void main()
{
    printline('*',20);
    printf("\nmy name is himanshu\n");
    printline('^',20);
}