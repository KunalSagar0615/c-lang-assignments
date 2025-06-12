#include<stdio.h>
void main()
{
    float r,h,vol,sarea;
    printf("enter h & radius=");
    scanf("%f%f",&r,&h);
    sarea=2*(3.14*(r*r))+2*r*h;
    vol=3.14*(r*r)*h;
    printf("\n surface area of cylinder=%.2f and volume=%.2f",sarea,vol);
}