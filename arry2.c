//write a program to fing area of 2 -5 triangle .
#include<stdio.h>
void main()
{
    int height[5],base[5],area[5],i;
    height[i];
    base[i];
    //height[1];
    //base[1];
    for(int i=0;i<5;i++)
    {
    printf("ENTER HEIGHT OF TRIANGLE %d=",i+1);
    scanf("%d",&height[i]);
    printf ("ENTER BASE OF TRIANGLE %d=",i+1);
    scanf("%d",&base[i]);
    printf(" height of triangel %d= %d\n",i+1,height[i]);
    printf(" base of triangel %d= %d\n",i+1,base[i]);
    
    }
    for(int i=0;i<5;i++)
     {
     area[i]=(height[i]*base[i])/2;
     printf ("AREA OF TRIANGLE %d=%d\n",i+1,area[i]);
     }

     

    // printf("\nENTER HEIGHT OF TRIANGLE 2= ");
    // scanf("%d",&height[1]);
    // printf ("\nENTER BASE OF TRIANGLE 2=");
    // scanf("%d",&base[1]);
    



    //  printf(" height of triangel 1= %d\n",height[0]);
    //  printf(" base of triangel 1= %d\n",base[0]);
    //  printf(" height of triange 2= %d\n",height[1]);
    //  printf(" base of triangel 2= %d\n",base[1]);


    //  area[0]=(height[0]*base[0])/2;
    //  printf ("AREA OF TRIANGLE 1=%d\n",area[0]);
    //  area[1]=(height[1]*base[1])/2;
    //  printf ("AREA OF TRIANGLE 2=%d",area[1]);


}