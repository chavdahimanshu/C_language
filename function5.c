//bmi calc using function
//bim=weight/height*height
//height1=feet/3.281
//height2=inch/39.37
//total height=height1+height2
#include<stdio.h>
float getbmi(float foot ,float inch, float weight)
{
    float f_m,i_m,t_h,bmi;
    f_m=foot/3.281;
    i_m=inch/39.37;
    t_h=f_m + i_m;
    printf("\nthe totol height=%f",t_h);
    bmi=weight/(t_h*t_h);
    printf("\nyour bmi is=%f",bmi);
    return bmi;
    return t_h;
}
// float geti_m(float inch)
// {
//     float i_m;
//     i_m=inch/39.37;
//     printf("\nthe totol height is foot to meter=%f",i_m);
//     return i_m;
// }
// void gett_h(float f_m, float i_m)
// {
//     float t_h;
//     t_h=f_m+i_m;
//     printf("the totol height is=%f",t_h);

// }
// float getbmi(float weight) 
// {
//     float bmi,t_h;
//     bmi=weight/(t_h*t_h);
//     printf("\nyour bmi is=%f",bmi);
//     return bmi;

// }

void main()
{
    float bmi,weight,foot,inch,f_m,i_m,t_h;
    printf("ENTER VALUE OF WEIGHT IN KG = ");
    scanf("%f",&weight);
    printf("enter height in foot= ");
    scanf("%f",&foot);
    printf("enter height in inch= ");
    scanf("%f",&inch);
    //getf_m(foot);
    //geti_m(inch);
    //i_m=inch/39.37;
    //gett_h(foot,inch);
    //t_h=getf_m(foot) + i_m;
    //printf("total height is=%.2f",t_h);
    getbmi(foot,inch,weight);
    //bmi=weight  / (t_h*t_h);
    //printf("\nyour bmi is=%f",bmi);



}