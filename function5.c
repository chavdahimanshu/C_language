//bmi calc using function
//bim=weight/height*height
//height1=feet/3.281
//height2=inch/39.37
//total height=height1+height2
#include<stdio.h>
float foottometer(float foot)
{
    float ftom;
    ftom=foot/3.281;
    printf("height foot to meter=%f\n",ftom);
    return ftom;

}
float inchtometer(float inch)
{
    float itom;
    itom=inch/39.37;
    printf("height inch to meter=%f\n",itom);
    return itom;
}
float totalhight(float n1,float n2)
{
    return n1+n2;
}
float bmi( int weight, float total_meter)
{
    float bmi;
    bmi=weight/(total_meter*total_meter);
    printf("\nYOUR BMI IS=%f",bmi);
    return bmi;
}
void main()
{
    int weight;
    float heightinfoot,footmeter,inchmeter,totalmeter;
    float heightininch;

    printf("enter weight= ");
    scanf("%d",&weight);
    printf("enter height in foot= ");
    scanf("%f",&heightinfoot);
    printf("enter height in inch= ");
    scanf("%f",&heightininch);
    footmeter= foottometer( heightinfoot );
    inchmeter= inchtometer( heightininch);
    totalmeter=totalhight(footmeter,inchmeter);
    printf("THE TOTAL METER IS =%f",totalmeter);
    bmi( weight,totalmeter);
    //printf("\nyour bmi is=%f",bmi(weight,totalmeter));
}