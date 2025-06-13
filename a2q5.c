#include<stdio.h>
void main()
{
    int n;
    printf("enter number=");
    scanf("%d",&n);
    if(n%5==0 && n%7==0)
    printf("no is divisible by 5 and  7");
    else if(n%5==0 && n%7!=0)
    printf("no is only divisible by 5");
    else if(n%5!=0 && n%7==0)
    printf("no is only divisible by 7");
    else
    printf("no is not divisible by 5 & 7");
}