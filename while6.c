//1 ,8 ,27 ,64 ,125 ...1000000
#include<stdio.h>
void main()
{
    int num=1 , cube=1;
    printf("%d,",cube);
    while(num<100)
    {
    num=num+1;
    cube=num*num*num;
    printf("%d,",cube);
    }
    //num=num+1;
    //cube=num*num*num;
    //printf("%d,",cube);
    //num=num+1;
    //cube=num*num*num;
    //printf("%d,",cube);
    //num=num+1;
    //cube=num*num*num;
    //printf("%d,",cube);
}