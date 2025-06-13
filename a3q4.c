#include<stdio.h>
void main()
{
    int n;
    float r,aoc,coc,vol,pi=3.14;
    printf("\n enter radius of circle=\n");
    scanf("%f",&r);
    printf("\n 1 for area \n 2 for circumference \n 3 for circumference \n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("\narea of circle=%.2f",(pi*(r*r)));
            break;
        case 2:printf("\n circumference of circle=%.2f",(2*pi*r));
            break;
        case 3:printf("\n volume of spher=%.2f",((4/3)*pi*(r*r*r)));
            break;
        default:printf("enter valid number");
    }
}