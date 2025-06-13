#include<stdio.h>
void main()
{
    int a,b;
    printf("enter 2 nos=\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\na=%d",b);
    printf("\nb=%d",a);
    a=a+b-(b=a);
    printf("\na=%d",b);
    printf("\nb=%d",a);
}