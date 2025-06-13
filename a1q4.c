#include<stdio.h>
void main()
{
    float u,a,t,v,s;
    printf("enter initial velocity , accleration and time =");
    scanf("%f%f%f",&u,&a,&t);
    v=u+a*t;
    s=u+a*(t*t);
    printf("final velocity =%.2f and distance=%.2f",v,s);
}