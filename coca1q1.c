#include<stdio.h>
void main()
{
    float r,coc,aoc;
    printf("enter radius=");
    scanf("%f",&r);
    aoc=3.14*(r*r);
    printf("\narea of circle=%.2f",aoc);
    coc=2*(3.14*r);
    printf("\ncircumference=%.2f",coc);
}