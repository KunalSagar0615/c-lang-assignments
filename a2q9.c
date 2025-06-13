#include<stdio.h>
void main()
{
    int year;
    printf("enter year=");
    scanf("%d",&year);
    if((year%4==0) || (year%400==0))
        printf("\n year is leap");
    else
        printf("\n year is not leap");
}