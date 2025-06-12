#include<stdio.h>
void main()
{
    float c,k,f;
    printf("enter temprature in feratile=");
    scanf("%f",&f);
    c=5/9*(f-32);
    k=c+273.15;
    printf("temprature in celcius=%.2f and kelvin=%.2f",c,k);
}