// Write a programe to store 5 subject marks for 1 student and also find total and average.

#include<stdio.h>
void main()
{
    int mark[5];
    int count=0;
    int sum=0;
    int avg=0;
    while(count<5)
    {
    printf("enter mark for subject %d=  ",count+1);
    scanf("%d",&mark[count]);
    count++;
    }
    sum=mark[0]+mark[1]+mark[2]+mark[3]+mark[4];
    printf("sum of all  subject mark %d ",sum);
    avg=(mark[0]+mark[1]+mark[2]+mark[3]+mark[4])/5;
    printf("\navaraged mark %d",avg);
    /*
    printf("\nenter mark for subject2 ",mark[1]);
    scanf("%d",&mark[1]);
    printf("\nenter mark for subject3 ",mark[2]);
    scanf("%d",&mark[2]);
    printf("\nenter mark for subject4 ",mark[3]);
    scanf("%d",&mark[3]);
    printf("\nenter mark for subject5 ",mark[4]);
    scanf("%d",&mark[4]);
    */



}