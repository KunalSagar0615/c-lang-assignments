#include<stdio.h>
void main()
{
    float l,b,h,sarea,vol;
    printf("enter length , breadth and height =\n");
    scanf("%f%f%f",&l,&b,&h);
    sarea=2/(l*b+l*h+b*h);
    vol=l*b*h;
    printf("\n surface area of cuboid =%.2f & volume=%.2f",sarea,vol);
}