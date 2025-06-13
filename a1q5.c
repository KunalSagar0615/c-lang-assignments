#include<stdio.h>
void main()
{
    float a,b,am,hm;
    printf("enter 2 nos=\n");
    scanf("%f%f",&a,&b);
    am=(a+b)/2;
    hm=(a*b)/(a+b);
    printf("\n arithmetic mean =%.2f and harmonic mean=%.2f",am,hm);
}