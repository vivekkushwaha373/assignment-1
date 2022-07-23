#include<stdio.h>
int main()
{   
    double A;
    float radius;
    scanf("%f",&radius);
    A=3.142857*radius*radius;
    printf("Area of circle is %lf having the radius %f",A,radius);
    return 0;
}